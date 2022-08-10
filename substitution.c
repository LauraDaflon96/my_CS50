#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // First, we declare our mais variables.
    int k = 0;
    int y = 0;
    string key = argv[1];
    // If the user prompts more the one argument, the program resets.
    if (argc != 2)
    {
        printf("Usage: ./substitution KEY\n");
        return 1;
    }

    else
    {
        // If the user prompt one argument, but without 26 characters, the program resets.
        if (strlen(argv[1]) != 26)
        {
            printf("The key must have 26 characters.\n");
            return 1;
        }

        else
        {
            // Now we do another loop, to checkif  each character is a letter.
            for (int i = 0, n = strlen(key); i < n; i++)
            {
                // If the character isn't a letter, the program resets.
                if (isalpha(key[i]) == 0)
                {
                    printf("Key must only contain alphabetic characters\n");
                    return 1;
                }
                else
                {
                    // Now we do a loop inside the other loop, to see if one of the letters is repeated.
                    for (int j = 0; j < i; j++)
                    {
                        // If there is at least one reapeted character, the program resets.
                        if (key[i] == key[j] || key[i] == key[j] + 32 || key[i] == key[j] - 32)
                        {
                            printf("Key must not contain repeated characters\n");
                            return 1;
                        }

                    }
                }
                
                // This one will only happen if the argument has 26 diferent letters, and it will put all letters in upper case.
                if (isupper(key[i]) == 0)
                {
                    key[i] = key[i] - 32;
                }
                    
            }
        }
    }
    // Now that we checked the argument, we can ask for the user to prompt the texted that is going to be encripted.
    string text = get_string("plaintext: ");
    
    // First we do a loop, to check each character of the string prompted.
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        // If the character is a letter, he will encript, if it's not, it will continue as it was before.
        if (isalpha(text[i]) != 0)
        {
            // If the letter is an uppercase one, the program will subtract 65, so the K variable will correspond to the key prompted as an argument.
            if (isupper(text[i]) != 0)
            {
                k = text[i] - 65;
                text[i] = key[k];
            }
            // If the letter is a lowercase one, the program will first subtract 97, to find the correspondent.
            else
            {
                y = text[i] - 97;
                // And than, add 32, so it will remain lowercase, as the key is all in uppercase.
                text[i] = key[y] + 32;
            }
        }
    }
    
    // Finally, we can print our ciphertext.
    printf("ciphertext: %s\n", text);
}