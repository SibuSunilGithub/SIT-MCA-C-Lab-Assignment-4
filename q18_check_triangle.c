// Check whether a triangle is equilateral, isosceles or scalene by taking appropriate inputs.

#include <stdio.h>
int main()
{
    int side1, side2, side3;

    // Taking Input sides of a triangle
    printf("Enter three sides of triangle:\n");
    scanf("%d%d%d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3)
    {
        // If all sides are equal
        printf("Equilateral triangle.");
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3)
    {
        // If any two sides are equal
        printf("Isosceles triangle.");
    }
    else
    {
        // If none sides are equal
        printf("Scalene triangle.");
    }

    return 0;
}