/*Make a program that calculates and shows the volume of a sphere being provided the value of its radius (R).
 The formula to calculate the volume is: (4/3) * pi * R3. Consider (assign) for pi the value 3.14159.*/

#include<stdio.h>
int main()
{
    double R,S;

    scanf("%lf", &R);

    S = ((4.0/3)*3.14159*R*R*R);

    printf("VOLUME = %.3lf\n", S);

    return 0;
}
