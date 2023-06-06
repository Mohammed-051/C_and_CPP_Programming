#include<stdio.h>

int main()
{
    int n,i,j;

    scanf("%d",&n);

    int a;
    int d=0,t=0,c=0,f=0;

    for(i=0; i<n; i++)
    {
        scanf("%d",&a);

           if(a%2==0)
            {
                d++;
            }
            if(a%3==0)
            {
                t++;
            }
            if(a%4==0)
            {
                c++;
            }
            if(a%5==0)
            {
                f++;
            }
    }



    printf("%d Multiplo(s) de 2\n",d);
    printf("%d Multiplo(s) de 3\n",t);
    printf("%d Multiplo(s) de 4\n",c);
    printf("%d Multiplo(s) de 5\n",f);

    return 0;
}
