#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int key_tracker = 0;
    int stoi;
    if (argc == 2)
    {
       for (int i = 0, len = strlen(argv[1]); i < len; i++)
       {
            if (isdigit(argv[1][i]))
            {
                key_tracker++;
            }
       }
            if (key_tracker == strlen(argv[1]))
            {
                stoi = (argv[1]);
                string pt =get_string("Plaintext:");
                printf("ciphertext: ");
                for (int a = 0, len = strlen(pt); a < len; a++)
                {
                 if (isalpha (pt[a]) && isupper(pt[a]))
                 {
                     printf("%c",(((pt[a] - 65)+ stoi) %26) + 65);
                 }
                 else if (isalpha (pt[a]) && islower(pt[a]))
                 {
                     printf("%c",(((pt[a] - 97)+ stoi) %26) + 97);
                 }
                 else
                 {
                     printf("%c",pt[a]);
                 }
    }
                printf("\n");
                return 0;
            }
            else
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

}
