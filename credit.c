#include <cs50.h>
#include <stdio.h>
int main(void)
{
    long n = get_long("Enter credit card number");
    int i, c = 0;
    int rem;
    int sum = 0;
    long t = 0;
    int prod = 1;
    int f = 0;
    t = n;
    long divisor = 1;

    while (t != 0)
    {
        t = t / 10;
        c++;
    }
    if (c != 15 && c != 13 && c != 16)
    {
        printf("INVALID\n");
        f = 1;
    }
    for (int j = 0; j < c - 2; j++)
    {
        divisor = divisor * 10;
    }
    long first_two = n / divisor;
    t = n;
    if (f == 0)
    {
        for (i = 1; i <= c; i++)
        {
            if (i % 2 != 0)
            {
                rem = t % 10;
                sum = sum + rem;
                t = t / 10;
            }
            else
            {
                rem = t % 10;
                prod = rem * 2;
                if (prod > 9)
                {
                    sum = sum + prod - 9;
                }
                else
                {
                    sum = sum + prod;
                }
                t = t / 10;
            }
        }
        if (sum % 10 == 0)
        {
            if (c == 15 && (first_two == 34 || first_two == 37))
            {
                printf("VALID\n");
                printf("AMEX\n");
            }
            else if (c == 16 && first_two >= 51 && first_two <= 55)
            {
                printf("VALID\n");
                printf("MASTERCARD\n");
            }

            else if ((c == 13 || c == 16) && first_two / 10 == 4)
            {
                printf("VALID\n");
                printf("VISA\n");
            }
            else
                printf("INVALID\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
}
