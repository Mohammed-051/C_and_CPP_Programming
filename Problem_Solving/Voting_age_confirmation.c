#include <stdio.h>

int main() {
  int x = 0;
  int y = 18;


  printf("Enter your age and press enter: \n");

  scanf("%d",&x);

   (x >= y) ? printf("OLD ENOUGH TO VOTE!") : printf("NOT OLD ENOUGH TO VOTE.");
 
  return 0; 
}