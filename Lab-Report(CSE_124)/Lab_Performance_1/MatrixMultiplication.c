#include<stdio.h>

int main()
{
    int a[3][3];
    int b[3][3];
    int sum[3][3] = {0};

    for(int i=0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            for(int k = 0; k<3; k++)
            {
               sum[i][j] += (a[i][j]*b[j][k]);
            }
        }
    }

     for(int i=0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
