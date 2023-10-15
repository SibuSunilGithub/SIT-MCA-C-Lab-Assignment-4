//  Check whether a character is an alphabet or not.

#include <stdio.h>
int main()
{
    char ch;
    printf("Please Enter A Character:\n");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("The Entered Character Is An Alphabate.");
    }
    else
    {
        printf("The Entered Character Is Not An Alphabate.");
    }
    return 0;
}
