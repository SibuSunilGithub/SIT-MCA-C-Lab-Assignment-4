// Test whether the given number is divisible by both 11 & 13.

#include <stdio.h>
int main()
{
    int num;
    printf("Please Enter A Number:\n");
    scanf("%d", &num);

    if (num % 11 == 0 && num % 13 == 0)
    {
        printf("%d is divisible by both 11 and 13\n", num);
    }
    else
    {
        printf("%d is not divisible by both 11 and 13\n", num);
    }
}