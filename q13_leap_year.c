// Check whether a given year is leap year or not...

#include <stdio.h>
int main()
{
    int year;
    printf("Please Enter The Year:\n");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("This Is Leap Year.");
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        printf("This Is Leap Year.");
    }
    else
    {
        printf("This Is Not Leap Year.");
    }
    return 0;
}
