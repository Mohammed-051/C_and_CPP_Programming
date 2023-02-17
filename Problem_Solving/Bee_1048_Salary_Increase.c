#include<stdio.h>
int main()
{
    float x,X1,X2,Y1,Y2,Z1,Z2,A1,A2,B1,B2;

    scanf("%f",&x);

    if(x >= 0 && x<= 400.00)
    {
        X1=x*0.15;
        X2=x+X1;
        printf("Novo salario: %.2f\n",X2);
        printf("Reajuste ganho: %.2f\n",X1);
        printf("Em percentual: 15 %%\n");
    }
    else if(x >= 400.01&& x<= 800.00)
    {
        Y1=x*0.12;
        Y2=x+Y1;
        printf("Novo salario: %.2f\n",Y2);
        printf("Reajuste ganho: %.2f\n",Y1);
        printf("Em percentual: 10 %%\n");
    }
    else if(x >= 800.01 && x<=1200.00)
    {
        Z1=x*0.10;
        Z2=x+Z1;
        printf("Novo salario: %.2f\n",Z2);
        printf("Reajuste ganho: %.2f\n",Z1);
        printf("Em percentual: 10 %%\n");
    }
    else if(x >= 1200.01 && x<= 2000.00)
    {
        A1=x*0.07;
        A2=x+A1;
        printf("Novo salario: %.2f\n",A2);
        printf("Reajuste ganho: %.2f\n",A1);
        printf("Em percentual: 7 %%\n");
    }
    else if(x> 2000.00)
    {
        B1=x*0.04;
        B2=x+B1;
        printf("Novo salario: %.2f\n",B2);
        printf("Reajuste ganho: %.2f\n",B1);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
