#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{ 
    float dolars;
    do
    {
        // This do/while loop is to get the value of the Change and make sure it is a positive number
        dolars = get_float("What is the change? \n$");  
    }
    while (dolars < 0);
    int quarters;
    int dimes;
    {
        // To make sure that the number is an integer
        int coins = round(dolars * 100);
 
        {
            // First divide by 25 (quarter), than see if it has a remainder.
            quarters = round(coins / 25);
            int x = (coins % 25);
            //If there is remainder bigger than 0, it will make the same process for dimes.
            if (x > 0)
            {
                dimes = round(x / 10);
                int total1 = (dimes + quarters);
                int w = (x % 10);
                
                //If the remainder of dimes is bigger than 0, it will make the same process for nickles.
                if (w > 0)
                { 
                    int y = (w % 10);
                    
                    if (y > 0)
                    {
                        int nickels = round(y / 5);
                        int total2 = (quarters + dimes + nickels);
                        int k = (y % 5);
                        
                        if (k > 0)
                        { 
                            //As pennie is 1, all the remainder of nickels are the number of pennies.
                            int pennies = (k);
                            int total = (pennies + nickels + dimes + quarters);
                            //To display the total if it will be used all types of coins
                            printf("%i\n", total);
                        }
                        else
                        {
                            //To display the total if it will be used only nickels, dimes and quarters
                            printf("%i\n", total2);
                            
                        }
                    }
                    else
                    {  
                        //To display the total if it will be used only dimes and quarters
                        printf("%i\n", total1);
                    }
                }
                else
                {
                    printf("%i\n", total1);
                }
            }
            else
            { 
//To display the total if it will be used only quarters
                printf("%i\n", quarters);
            }
        }
    }
} 

