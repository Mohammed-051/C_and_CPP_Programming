#include <stdio.h>

int main ()
{
  double exm_number;

  printf("Enter your number here: ");
  scanf("%lf", &exm_number);

  if(exm_number>100)
  {
    printf("INVALID NUMBER\n");
    printf("TRY AGAIN WITH VALID NUMBER");
  }
  else if(exm_number<= 100 && exm_number>=80)
  {
    printf("Your Grade:A+\n");
    printf("Your CGPA: 4.00");
  }
  else if(exm_number<=79  && exm_number>=75)
  {
    printf("Your Grade: A\n");
    printf("Your CGPA: 3.75");
  }
  else if(exm_number<= 74 && exm_number>=70)
  {
    printf("Your Grade:A-\n");
    printf("Your CGPA: 3.5");
  }
  else if(exm_number<= 69 && exm_number>=65)
  {
    printf("Your Grade:B+\n");
    printf("Your CGPA: 3.25");
  }
   else if(exm_number<= 64 && exm_number>=60)
  {
    printf("Your Grade:B\n");
    printf("Your CGPA: 3.00");
  } 
  else if(exm_number<= 59 && exm_number>=55)
  {
    printf("Your Grade:B-\n");
    printf("Your CGPA: 2.75");
  }
  else if(exm_number<= 54 && exm_number>=50)
  {
    printf("Your Grade:C+\n");
    printf("Your CGPA: 2.5");
  }
  else if(exm_number<= 49 && exm_number>=45)
  {
    printf("Your Grade:C\n");
    printf("Your CGPA: 2.25");
  }
   else if(exm_number<= 44 && exm_number>=40)
  {
    printf("Your Grade:D\n");
    printf("Your CGPA: 2.00");
  } 
  else
  {
    printf("Your Grade:F\n");
    printf("Your CGPA: 0.00");
  }

  return 0;
}
