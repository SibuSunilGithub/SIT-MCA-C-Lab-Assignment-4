// Test Whether A Three Digit Number Is Palindrome Or Not...(Using If Else)

#include <stdio.h>
int main()
{
    int num, bit1, bit3;
    printf("Please Enter A Three Digit Number\n");
    scanf("%d", &num);
    bit1 = num % 10;
    bit3 = num / 100;
    if (bit1 == bit3)
    {
        printf("The Number Is Palindrome Number.");
    }
    else
    {
        printf("The Number Is Not Palindrome Number.");
    }
    return 0;
}