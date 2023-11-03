#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    float cents;
    int totcoins = 0;

    // Validation of value
    do
    {
        cents = get_float("Change owed: ");
    } while (cents <= 0);

    // Convering cents to int (dollar)
    int dollars = round(cents * 100);

    // Comparing values
    while (dollars > 0)
    {
        if (dollars >= 25)
        {
            dollars -= 25;
            totcoins++;
        }
        else if (dollars >= 10)
        {
            dollars -= 10;
            totcoins++;
        }
        else if (dollars >= 5)
        {
            dollars -= 5;
            totcoins++;
        }
        else
        {
            dollars--;
            totcoins++;
        }
    }
    printf("%i coins\n", totcoins);
}
