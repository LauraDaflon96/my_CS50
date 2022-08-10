#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        // Prompt to get a height between 1 and 8
        n = get_int("Input a height in the range from 1 to 8:  ");
    }
    // To check if the user answered a number in that range
    while (n < 1 || n > 8);
    
    for (int i = 0; i < n; i++)
    {
        // For loop to print the spaces that invert the first pyramid
        for (int f = 0; f < (n - i - 1); f++)
        {
            printf(" ");
        }
        // For loop to print the actual first pyramid
        for (int j = 0; j <= i; j++)
        { 
            printf("#");
           
        }
        for (int g = 0; g < n; g = g + 8)
        {
            // For loop to make the space between the pyramids
            printf("  ");
        }
        for (int k = 0; k <= i; k++)
        { 
            // Loop for the second pyramid
            printf("#");
        }
        printf("\n");
    }
}
