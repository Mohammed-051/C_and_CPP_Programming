#include<stdio.h>

int main()
{

    int x,z,a=1,c=0,i=0;

    scanf("%d%d",&x,&z);

    while(z<=x)scanf("%d",&z);


    for(i= x; i<=z; i++)
    {
        c += i;
        if(c>z)break;
        a++;
    }

    printf("%d\n",a);
    
    return 0;
}
