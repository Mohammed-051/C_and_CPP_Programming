#include <stdio.h>
int main()
{
    int x,y,z,t;
    char c1,c2,c3;
    scanf("%d%c%d%c%d%c%d",&x,&c1,&y,&c2,&z,&c3,&t);
    printf("%03d\n",x);
    printf("%03d\n",y);
    printf("%03d\n",z);
    printf("%02d\n",t);
    return 0;
}
