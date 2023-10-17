// Test whether a given number is divisible by 5 or not using ternary operator.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter A Number To Check:\n");
    scanf("%d", &num);
    (num % 5 == 0) ? printf("%d Is Divisible By 5.\n", num) : printf("%d Is Not Divisible By 5.\n", num);
    return 0;
}