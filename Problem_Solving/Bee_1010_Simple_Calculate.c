/*In this problem, the task is to read a code of a product 1, the number of units of product 1,
the price for one unit of product 1, the code of a product 2, the number of units of product 2 and
the price for one unit of product 2. After this, calculate and show the amount to be paid.*/
#include<stdio.h>
int main()
{
    double x,y,z,a,b,c,X,A,T;

    scanf("%lf %lf %lf", &x,&y,&z);
    scanf("%lf %lf %lf", &a,&b,&c);
    X = y*z;
    A = b*c;
    T = X+A;

    printf("VALOR A PAGAR: R$ %0.2lf\n",T);


    return 0;
}
