#include<stdio.h>
int main(void)
{
    int A,B,C,d,e;
    scanf("%d%d%d",&A,&B,&C);

    d=(A+B+abs(A-B))/2;
    e=(d+C+abs(d-C))/2;

    printf("%d eh o maior\n",e);
}
