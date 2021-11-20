#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
       height = get_int("Height: ");
    }
    while (height < 1 || height > 8);


    for (int i = 0; i < height; i++)
    {
    //left pyramid empty spaces

        for (int left_e = height - 1; left_e > i; left_e--)
        {
            printf(" ");
        }

    //left pyramid

        for (int left = -1; left < i; left++)
        {
            printf("#");
        }

    //gap
    {
        printf("  ");
    }

    //right pyramid

    for (int right = -1; right < i; right++)
    {
        printf("#");

    }

    printf("\n");

    }

}