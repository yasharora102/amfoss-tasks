#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
          RGBTRIPLE cur_pixel = image[i][j];
          int avg = round((cur_pixel.rgbtBlue + cur_pixel.rgbtRed + cur_pixel.rgbtGreen)/3.0);
          image[i][j].rgbtBlue= avg;
          image[i][j].rgbtRed= avg;
          image[i][j].rgbtGreen= avg;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            RGBTRIPLE cur_pixel = image[i][j];
            int sepiaRed = round(.393 * cur_pixel.rgbtRed + .769 * cur_pixel.rgbtGreen + .189 * cur_pixel.rgbtBlue);
            int sepiaGreen = round(.349 * cur_pixel.rgbtRed + .686 * cur_pixel.rgbtGreen + .168 * cur_pixel.rgbtBlue);
            int sepiaBlue =  round(.272 * cur_pixel.rgbtRed + .534 *cur_pixel.rgbtGreen + .131 * cur_pixel.rgbtBlue);

            if (sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }

            if (sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }

            if (sepiaRed > 255)
            {
                sepiaRed = 255;
            }
            image[i][j].rgbtBlue = sepiaBlue;
            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen;
        }
    }

    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE tmp[height][width];
    for (int i = 0; i < height; i++)
    {
        int cursor = 0;
        for (int j = width -1; j >=0; j--,cursor++)
        {

          tmp[i][cursor]=image[i][j];
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j]=tmp[i][j];
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE tmp[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            tmp[i][j] = image[i][j];
        }
    }

    for (int i = 0, red, green, blue, count; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            red = green = blue = count = 0;

            if (i >= 0 && j >= 0)
            {
                red += tmp[i][j].rgbtRed;
                green += tmp[i][j].rgbtGreen;
                blue += tmp[i][j].rgbtBlue;
                count++;
            }

            if (i >= 0 && j - 1 >= 0)
            {
                red += tmp[i][j-1].rgbtRed;
                green += tmp[i][j-1].rgbtGreen;
                blue += tmp[i][j-1].rgbtBlue;
                count++;
            }

            if ((i >= 0 && j + 1 >= 0) && (i >= 0 && j + 1 < width))
            {
                red += tmp[i][j+1].rgbtRed;
                green += tmp[i][j+1].rgbtGreen;
                blue += tmp[i][j+1].rgbtBlue;
                count++;
            }

            if (i - 1 >= 0 && j >= 0)
            {
                red += tmp[i-1][j].rgbtRed;
                green += tmp[i-1][j].rgbtGreen;
                blue += tmp[i-1][j].rgbtBlue;
                count++;
            }

            if (i - 1 >= 0 && j - 1 >= 0)
            {
                red += tmp[i-1][j-1].rgbtRed;
                green += tmp[i-1][j-1].rgbtGreen;
                blue += tmp[i-1][j-1].rgbtBlue;
                count++;
            }

            if ((i - 1 >= 0 && j + 1 >= 0) && (i - 1 >= 0 && j + 1 < width))
            {
                red += tmp[i-1][j+1].rgbtRed;
                green += tmp[i-1][j+1].rgbtGreen;
                blue += tmp[i-1][j+1].rgbtBlue;
                count++;
            }

            if ((i + 1 >= 0 && j >= 0) && (i + 1 < height && j >= 0))
            {
                red += tmp[i+1][j].rgbtRed;
                green += tmp[i+1][j].rgbtGreen;
                blue += tmp[i+1][j].rgbtBlue;
                count++;
            }

            if ((i + 1 >= 0 && j - 1 >= 0) && (i + 1 < height && j - 1 >= 0))
            {
                red += tmp[i+1][j-1].rgbtRed;
                green += tmp[i+1][j-1].rgbtGreen;
                blue += tmp[i+1][j-1].rgbtBlue;
                count++;
            }

            if ((i + 1 >= 0 && j + 1 >= 0) && (i + 1 < height && j + 1 < width))
            {
                red += tmp[i+1][j+1].rgbtRed;
                green += tmp[i+1][j+1].rgbtGreen;
                blue += tmp[i+1][j+1].rgbtBlue;
                count++;
            }

            image[i][j].rgbtRed = round(red / (count * 1.0));
            image[i][j].rgbtGreen = round(green / (count * 1.0));
            image[i][j].rgbtBlue = round(blue / (count * 1.0));
        }
    }

    return;
}
