#include <stdio.h>

int main() 
{
  int sub1,sub2;
  float avg;
  
      printf("Enter the 1st subject marks :");
      scanf("%d", &sub1);
      printf("Enter the 2nd subject marks :");
      scanf("%d", &sub2);
      avg = (sub1 + sub2)/2;
      printf("Average of marks in subjects : %.2f",avg);
  return 0;
}

