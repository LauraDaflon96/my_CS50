#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    string str = argv [1];
    int L = 0;
    int key = 0;
    
    // Firs, we need to check if the user wrote a single argument, so argc must be 2.
    if (argc != 2)
    {
        printf("Usage: ./ceaser key\n");
        return 1;
    }
    // Than, we need to check if he wrote a number.
    else
    {
        for (int i = 0, n = strlen(str); i < n; i++)
        {
            if (isalpha(str[i]) != 0)
            {
                L++;
            }
        }
    }
    
    if (L == 0)
    {
        key = atoi(argv[1]);  
    }
    else
    {
        printf("Usage: ./ceaser key\n");
        return 1;
    }
    
    // Now that everything is checked, we need to get the text.
    string text = get_string("plaintext: ");
    
    // The for loop is to check each character of the word.
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        // Check if it is uppercase or a lowercase
        if (isalpha(text[i]) != 0)
        {
            if (isupper(text[i]) != 0)
            {
                // Than converting the character to the cypher by the key provided.
                int c = text[i] - 65;
                int index = (c + key) % 26;
                text[i] = index + 65;
                
            }
            
            else
            {
                int c = text[i] - 97;
                int index = (c + key) % 26;
                text[i] = index + 97;
            }
        }
    }
    
    // So we can print out the ciphertext.
    printf("ciphertext: %s\n", text);
}