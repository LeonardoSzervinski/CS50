#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    // Verification from the height
    do
    {
        height = get_int("Write a value this (1 one 8): ");
    } while (height < 1 || height > 8);

    // Building Pyramid
    for (int line = 0; line < height; line++)
    {
        // Building Blanks
        for (int column = height; column > line; column--)
        {
            printf(" ");
        }

        // Addition hashes from the lines and column
        for (int hashes = -1; hashes < line; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}
