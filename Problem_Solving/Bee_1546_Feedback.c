#include<stdio.h>

int main()
{
    int n, k, l, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d", &k);
        for(j = 1; j <= k; j++)
        {
            scanf("%d", &l);
            if (l == 1)
            {
                printf("Rolien\n");
            }
            if (l == 2)
            {
                printf("Naej\n");
            }
            if (l == 3)
            {
                printf("Elehcim\n");
            }
            if (l == 4)
            {
                printf("Odranoel\n");
            }
        }
    }
    return 0;
}
