#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"

int main()
{
    float a, b, c;
    float d, x1, x2;

    printf("Enter a: ");
    scanf("%f", &a);

    printf("Enter b: ");
    scanf("%f", &b);

    printf("Enter c: ");
    scanf("%f", &c);

    if (a == 0){
        x1 = (-c) / b;
        printf ("%f", x1);
    } else {
        d = (b*b) - (4 * a * c);

        if (d < 0)
            printf ("Roots doesn't exist");
        else
            if (d == 0) {
                x1 = (-b) / (2 * a);
                printf ("%f", x1);
            } else {
                d = sqrt(d);
                x1 = (-b + d) / (2 * a);
                x2 = (-b - d) / (2 * a);
                printf ("%f %f", x1, x2);
            }
        }
    return 0;
}
