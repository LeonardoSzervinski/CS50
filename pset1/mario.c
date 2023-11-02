#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    // Verification from the height 
    do
    {
        height = get_string("Write a value this (1 one 8): ");
    } while (height < 1 || height > 8);

    
}