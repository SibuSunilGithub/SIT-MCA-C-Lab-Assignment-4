// Evaluate the expression, X = (a – b) / (c – d) and give an error message when c == d.

#include <stdio.h>
int main()
{
    int a, b, c, d;
    float X;
    printf("Enter The Values Of a,b,c,d\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (c == d)
    {
        printf("Error");
    }
    else
    {
        X = (a - b) / (float)(c - d);
        printf("X = %f", X);
    }
    return 0;
}