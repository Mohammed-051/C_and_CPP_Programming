#include <stdio.h>

int main() {
  int myNum = 15;
  
  int myOtherNum = 23;

  // Assign the value of myOtherNum (23) to myNum
  myNum = myOtherNum;

  // myNum is now 23, instead of 15
  printf("%d", myNum);
  //We can also assign the value of one variable to another
  return 0;
}