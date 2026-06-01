#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    while (true)
    {
        n = get_int("Enter a positive number\n");
        if (n > 0)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    int temp;
    temp = n;
    int count = 0;
    printf("%i", temp);
    while (temp != 1)
    {
        if (temp % 2 == 0)
        {
            temp = temp / 2;
            printf("-->%i", temp);
        }
        else
        {
            temp = (temp * 3) + 1;
            printf("-->%i", temp);
        }
        count++;
    }
    printf("\n");
    printf("Number of steps = %i\n", count);
}
