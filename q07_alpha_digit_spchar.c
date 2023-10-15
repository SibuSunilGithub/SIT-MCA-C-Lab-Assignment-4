// Input any character and check whether it is an alphabet, a digit or a special character.

#include <stdio.h>
int main()
{
    char ch;
    printf("Please Enter A Character:\n");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("Entered Character Is An Alphabate.\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Entered Character Is A Digit.\n");
    }
    else
    {
        printf("Entered Character Is A Special Character.\n");
    }
    return 0;
}
