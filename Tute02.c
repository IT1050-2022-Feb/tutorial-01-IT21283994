#include <stdio.h>

int main()
 {
  int distance;
  int amount;
  int total_amount;

  printf("Enter the distance the van has travelled : ");
  scanf("%d",&distance);

  if(distance <= 30)
  {
    total_amount = distance * 50;
    printf("Total amount is : %d", total_amount);
  }
  else
  {
    total_amount = 30*50 + (distance - 30)*40;
    printf("Total amount is : %d", total_amount);

  }

  return 0;
}