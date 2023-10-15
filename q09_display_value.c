// Read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0, and -1 when m is less than 0.

#include <stdio.h>
int main()
{
    int m;
    printf("Please Enter The Number:\n");
    scanf("%d", &m);

    if (m > 0)
    {
        printf("The value of n = 1\n");
    }
    else if (m < 0)
    {
        printf("The value of m = -1\n");
    }
    else
    {
        printf("The value is 0\n");
    }
    return 0;
}
