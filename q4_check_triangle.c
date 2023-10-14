// Check whether a triangle can be formed with the given values for the angles.

#include <stdio.h>
int main()
{
    int ang1, ang2, ang3;
    printf("Enter Three Angle Values Of A Triangle:\n");
    scanf("%d%d%d", &ang1, &ang2, &ang3);
    if ((ang1 + ang2 + ang3) == 180)
    {
        printf("Triangle Formed Successfully.");
    }
    else
    {
        printf("Triangle Can Not Formed!");
    }
    return 0;
}