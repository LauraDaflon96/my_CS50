#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long number;
    long res1, res2, ans;
    long sum1 = 0;
    long sum2 = 0;
    long num = 0;
    long result1 = 0;
    long result2 = 0;

    number = get_long("Number: ");

    if(number >= (51 * pow(10,14)) && number < (56 * pow(10,14)))
    {
         for(int i = 1; i <= 8; i++)
        {
            res2 = number % 10;
            number = number / 10;
            res1 = (number % 10) * 2;
            if (res1 >= 10)
            {
                num = res1 % 10;
                res1 = num + (res1/10);
            }
            number = number / 10;
            sum1 = sum1 + res1;
            sum2 = sum2 + res2;
        }
        ans = sum1 + sum2;
        if (ans % 10 == 0)
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    

}
    else if(number >= 34 * pow(10,13) && number < 35 * pow(10,13))
    {
         for(int i = 1; i <= 8; i++)
        {
            res2 = number % 10;
            number = number / 10;
            res1 = (number % 10) * 2;
            if (res1 >= 10)
            {
                num = res1 % 10;
                res1 = num + (res1/10);
            }
            number = number / 10;
            sum1 = sum1 + res1;
            sum2 = sum2 + res2;
        }
        ans = sum1 + sum2;
        if (ans % 10 == 0)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    
    else if(number >= 37 * pow(10,13) && number < 38 * pow(10,13))
    {
         for(int i = 1; i <= 8; i++)
        {
            res2 = number % 10;
            number = number / 10;
            res1 = (number % 10) * 2;
            if (res1 >= 10)
            {
                num = res1 % 10;
                res1 = num + (res1/10);
            }
            number = number / 10;
            sum1 = sum1 + res1;
            sum2 = sum2 + res2;
        }
        ans = sum1 + sum2;
        if (ans % 10 == 0)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    } 

    else if(number >= 4 * pow(10,12) && number < 5 * pow(10,12))
    {
            
         for(int i = 1; i <= 8; i++)
        {
            res2 = number % 10;
            number = number / 10;
            res1 = (number % 10) * 2;
            if (res1 >= 10)
            {
                num = res1 % 10;
                res1 = num + (res1/10);
            }
            number = number / 10;
            sum1 = sum1 + res1;
            sum2 = sum2 + res2;
        }
        ans = sum1 + sum2;
        if (ans % 10 == 0)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

    else if(number >=4 * pow(10,15) && number < 5 * pow(10,15))
    {
            
         for(int i = 1; i <= 8; i++)
        {
            res2 = number % 10;
            number = number / 10;
            res1 = (number % 10) * 2;
            if (res1 >= 10)
            {
                num = res1 % 10;
                res1 = num + (res1/10);
            }
            number = number / 10;
            sum1 = sum1 + res1;
            sum2 = sum2 + res2;
        }
        ans = sum1 + sum2;
        if (ans % 10 == 0)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

    else
    {
        printf("INVALID\n");
    }
}
    
