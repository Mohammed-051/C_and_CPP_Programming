#include<stdio.h>

int main()
{
    int x;
    int h,m,s;
    int Rx;

    scanf("%d",&x);

    h = (x/3600);
    Rx = x - (h * 3600);
    m = Rx/60;
    Rx = Rx - (m*60);
    s = Rx;

    printf("%d:%d:%d\n",h,m,s);
}
