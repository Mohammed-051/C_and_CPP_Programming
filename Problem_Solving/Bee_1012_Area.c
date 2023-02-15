#include<stdio.h>
int main()
{
    double A,B,C,T,Y,Z,Q,R;

    scanf("%lf %lf %lf", &A,&B,&C);

    T = (0.5*A*C); 
    Y = (3.14159*C*C);
    Z = (0.5*(A+B)*C);
    Q = (B*B);
    R = (A*B);

    printf("TRIANGULO: %0.3lf\n", T);
    printf("CIRCULO: %0.3lf\n", Y);
    printf("TRAPEZIO: %0.3lf\n", Z);
    printf("QUADRADO: %0.3lf\n", Q);
    printf("RETANGULO: %0.3lf\n", R);

    return 0;
}