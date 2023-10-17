//  Find the largest among three numbers using ternary operator.

#include <stdio.h>
int main()
{
    int num1, num2, num3, large;
    printf("Enter Three Numbers:\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    large = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    printf("%d Is The Largest Number.", large);
    return 0;
}