// Accept a coordinate point in a XY plane and determine in which quadrant the point lies.

#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter Coordinate Point x:\n");
    scanf("%d", &x);
    printf("Enter Coordinate Point y:\n");
    scanf("%d", &y);

    /* In This Program We Only Check Condition for Point Lies On Which Quadrant , For More Clarity like when user
    enter one point zero and another point ...some thing other then we need to modify the code for accurate result.
    */

    if (x == 0 && y == 0)
    {
        printf("The Point Lies On The Origin.");
    }
    else if (x > 0)
    {
        if (y > 0)
        {
            printf("The Point Lies In First Quadrant.");
        }
        else
        {
            printf("The Point Lies In Fourth Quadrant.");
        }
    }
    else
    {
        if (y > 0)
        {
            printf("The Point Lies In Second Quadrant.");
        }
        else
        {
            printf("The Point Lies In Third Quadrant.");
        }
    }

    return 0;
}