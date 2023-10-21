// Calculate the roots of a quadratic equation.

#include <stdio.h>
#include <math.h>

int main()
{
    // consider equation as: ax^2 + bx + c

    double a, b, c, root1, root2, imgpart, realpart, discriminant;
    printf("Please Enter The Coefficients Of The Equations\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;
    // when discriminant greater than 0 then 2 roots
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root1 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    // when discriminant = 0 then same root
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root1);
    }
    else
    // when discriminant less than 0 then two roots with imaginary numbers
    {
        realpart = -b / (2 * a);
        imgpart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2lfi", realpart, imgpart, realpart, imgpart);
    }
    return 0;
}
