// Check whether a given number is even or odd.

#include <stdio.h>
int main()
{
    int num;
    printf("Please Enter A Number:\n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("The Number Is Even Number.");
    }
    else
    {
        printf("The Number Is Odd Number.");
    }
    return 0;
}