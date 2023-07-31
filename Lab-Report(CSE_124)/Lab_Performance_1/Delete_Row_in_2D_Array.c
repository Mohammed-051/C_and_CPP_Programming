#include<stdio.h>
int main()
{
    int a[3][3];

      for(int i=0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int b[2][3];
        for(int i=0; i<1; i++)
    {
        for(int j = 0; j<3; j++)
        {
            b[i][j] = a[i][j];

        }
    }
    for(int i=2; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            for (int k =1; k<2;k++)
            {
                b[k][j] = a[i][j];
            }
        }
    }

     for(int i=0; i<2; i++)
    {
        for(int j = 0; j<3; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
