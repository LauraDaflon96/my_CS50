#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    int L = 0;
    int W = 1;
    int S = 0;
    // First, we ask for a text.
    string t = get_string("Your text here: ");
    
    // While i is smaller than the lenght of the string typed, the program will do the follow things:
    for (int i = 0, n = strlen(t); i < n; i++)
    {
        // Check if it is a alphabetic value.
        if (isalpha(t[i]) != 0)
        {
            // Add to the number of letters.
            L++;
        }
        
        // Check if ther is a space followed by a letter.
        if (t[i] == 32 && isalpha(t[i + 1]) != 0)
        {
            // Add to the number of words.
            W++;
        }
        
        // Check if there is a phrase mark, like ., !, ? or "".
        if (t[i] == 33 || t[i] == 46 || t[i] == 63 || (t[i] == 34 && isalpha(t[i + 1])))
        {
            // Add to the number of setences,
            S++;
        }
    }
    
    int AL = (100 * L) / W;
    int AS = (100 * S) / W;
    // Do the calculations to found out the level of the text and, than, printing it.
    float index = (0.0588 * AL - 0.296 * AS - 15.8) - 0.05;
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    
    if (1 <= index && index < 16)
    {
        printf("Grade %.0f\n", round(index));
    }
    
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
}