// Check whether an alphabet is a vowel or consonant.

#include <stdio.h>
int main()
{
    char ch;
    printf("Please Enter A Character:\n");
    scanf("%c", &ch);
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Entered Character Is A Vowel.\n");
    }
    else
    {
        printf("Entered Character Is A Consonant.\n");
    }
    return 0;
}