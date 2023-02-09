/*Make a program that reads a seller's name, his/her fixed salary and the sale's total made by
himself/herself in the month (in money). Considering that this seller receives 15% over all products
sold, write the final salary (total) of this seller at the end of the month , with two decimal places.*/
#include<stdio.h>
int main()
{
    double x,y,a;
    char k;
    scanf("%s %lf %lf", &k,&x,&y);

    a=(x+(y*0.15));

    printf("TOTAL = R$ %0.2lf\n",a);

    return 0;
}
