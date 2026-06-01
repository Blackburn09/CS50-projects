#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What is your name\n");
    int hour =get_int("Enter the hour\n");
    if(0<=hour&&hour<=11)
    {
        printf("Good morning %s\n", name);
    }else if(11<hour&&hour<=17)
    {
        printf("Good afternoon %s\n", name);
    }else if(17<hour&&hour<=23)
    {
        printf("Good evening %s\n", name);
    }else
    {
        printf("Invalid input\n");
    }

}
