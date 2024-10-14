#include<stdio.h>
int main()
{
  int i,j,n ;
  printf("Enter your value: ");
  scanf("%d",&n);
  for (int i = n; i >=1; i--)
  {
    for (int j = i*2; j>=2;j=j-2)
    {
      printf("%d ",j) ;
    }
    printf("\n") ;
    
  }
  return 0 ;
  
}