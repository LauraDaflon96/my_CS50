#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        //Prompt user to choose a height from 1 to 8
        n = get_int("Input a height in the range from 1 to 8:  ");
    }
    //Check if user choose the number in that range
    while (n < 1 || n > 8);
    
    for (int i = 0; i < n; i++)
    {
        //The loop for the spaces to make the pyramid to the right
        for (int f = 0; f < (n - i - 1); f++)
        {
            printf(" ");
        }
        // Loop to print the actual pyramid
        for (int j = 0; j <= i; j++)
        { 
            printf("#");
           
        }
        printf("\n");
    }
}
