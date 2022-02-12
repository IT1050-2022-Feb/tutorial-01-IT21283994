#include <stdio.h>
int main() 
{
  int i,n;
  int sum=0;
    
    printf("Give the value for n :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
      sum+= i;
    }
     printf("Sum is : %d",sum);
  return 0;
}
