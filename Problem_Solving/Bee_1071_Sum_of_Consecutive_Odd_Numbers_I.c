#include<stdio.h>
int main(void)
{
  int n = 0,i =0,a,b;
  scanf("%d %d", &a,&b);

  if(a>b)
  {
    int temp = a;
    a = b;
    b = temp;
  }
  for(i=a+1; i<b; i++)
  {
    if((i%2 != 0))
    n = n+i;
    
  }
  printf("%d\n", n);
    
}
