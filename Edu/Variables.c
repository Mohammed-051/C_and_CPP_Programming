#include <stdio.h>
      /*
      int - stores integers (whole numbers), without decimals, such as 123 or -123
      float - stores floating point numbers, with decimals, such as 19.99 or -19.99
      char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes

      Also possible to declare a variable without assigning the value, and assign the value later:

               // Declare a variable
               int myNum;

               // Assign a value to the variable
               myNum = 15;

      The general rules for naming variables are:

               Names can contain letters, digits and underscores
               Names must begin with a letter or an underscore (_)
               Names are case sensitive (myVar and myvar are different variables)
               Names cannot contain whitespaces or special characters like !, #, %, etc.
               Reserved words (such as int) cannot be used as names

     */
int main() {
  // Create variables
  int myNum = 15;              // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  char myLetter = 'D';         // Character
  
  // Print variables
       //A format specifier starts with a percentage sign %, followed by a character.
  printf("%d\n", myNum);     
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);
  return 0;
}