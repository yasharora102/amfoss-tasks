#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

    float change = get_float("Enter change owed: ");
    int cents = round(change * 100);
    int count = 0;

    while (cents > 0)
    {
        if (cents >= 25)
        {
            cents = cents - 25;
            count++;
        }
        else if (cents >= 10)
        {
            cents = cents - 10;
            count++;
        }
        else if (cents >= 5)
        {
            cents = cents - 5;
            count++;
        }
        else
        {
            cents = cents - 1;
            count++;
        }
    }
    printf("%d\n", count);

}