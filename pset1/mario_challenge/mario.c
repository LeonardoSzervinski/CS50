#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    int hashes;

    // Write a valid number from 1 to 8
    do
    {
        height = get_int("Write number between 1 to 8: ");

    } while (height < 1 || height > 8);

    // Building the lines and columns
    for (int line = 0; line < height; line++)
    {

        for (int blank_left = height; blank_left > line; blank_left--) /* Generating an inverse pyramid with blanks*/
        {
            printf(" ");

            /*
            ........
            .......
            ......
            .....
            ....
            ...
            ..
            .
            */
        }

        for (hashes = 0; hashes <= line; hashes++) /* Generating growing pyramid with hashes */
        {
            printf("#");

            /*
            ........#
            .......##
            ......###
            .....####
            ....#####
            ...######
            ..#######
            .########
            */
        }

        for (int blank_fixed = 0; blank_fixed < 3; blank_fixed++) /* Generating blank between the middle of pyramids | width -> 3*/
        {
            printf(" ");

            /*
            ...
            ...
            ...
            ...
            ...
            ...
            ...
            */
        }

        for (int hashes2 = 0; hashes2 <= line; hashes2++) /* Generating descending pyramid with hashes */
        {
            printf("#");
        }

        for (int blank_right = height; blank_right > line; blank_right--) /* Generating growing pyramid with hashes */
        {
            printf(" ");
        }

        printf("\n");
    }
}
