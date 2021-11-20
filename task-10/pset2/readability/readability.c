#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int letter_count(string text);
int word_count(string text);
int sen_count(string text);
int main(void)
{
    string text = get_string("Type:");
    float grd = 0.0588 * (100 * (float) letter_count(text) / (float) word_count(text)) - 0.296 * (100 * (float) sen_count(text) / (float) word_count(text)) - 15.8;

    if (grd < 16 && grd >= 0)
    {
        printf("Grade %i\n", (int) round(grd));
    }
    else if (grd >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }
}

int letter_count(string text)
{
    int letters = 0;
    for (int i = 0,len = strlen(text); i<len; i++)
    {
        if (isupper(text[i]))
        {
            letters++;
        }
        else if (islower(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

int word_count(string text)
{
    int words = 1;
    for (int j = 0,len = strlen(text); j<len; j++)
    {
        if (text[j]== ' ')
        {
            words++;
        }

    }
    return words;
}

int sen_count(string text)
{
    int sen = 0;
    for (int k = 0,len =strlen(text); k<len; k++)
    {
        if (text[k] == '.' || text[k] == '!' || text[k] == '?')
        {
            sen++;
        }
    }
    return sen;
}

