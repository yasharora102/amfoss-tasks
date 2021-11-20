#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#define BLOCKSIZE 512

int main(int argc, char *argv[])
{
    if (argc !=2)
    {
        printf("Usage: ./recover image\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    typedef uint8_t BYTE;
    BYTE buffer[BLOCKSIZE];
    size_t read_bytes;
    bool first_jpeg=false;
    int f_number = 0;
    FILE *c_file;
    char c_filename[8];
    bool jpeg_found=false;


    while (true)
    {
        read_bytes=fread(buffer,sizeof(BYTE),BLOCKSIZE,file);
        if (read_bytes ==0)
        {
            break;
        }
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            jpeg_found = true;

            if (!first_jpeg)
            {
                first_jpeg=true;

            }
            else
            {
                fclose(c_file);

            }
            sprintf(c_filename, "%03i.jpg",f_number);
            c_file = fopen(c_filename,"w");
            fwrite(buffer,sizeof(BYTE),read_bytes,c_file);
            f_number++;
        }
        else
        {
            if(jpeg_found)
            {
                fwrite(buffer,sizeof(BYTE),read_bytes,c_file);
            }
        }
    }
    fclose(file);
    fclose(c_file);
    return 0;

}