#include<stdio.h>
int main()
{
    float a,b,c,A,B;

    scanf("%f %f %f",&a,&b,&c);

    if(a+b>c && b+c>a && c+a>b)
    {
        A=a+b+c;
        printf("Perimetro = %0.1f\n",A);
    }
    else
    {
        B=(0.5*(a+b))*c;
        printf("Area = %0.1f\n",B);
    }
}