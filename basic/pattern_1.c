#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.

   int start,end,len ;
   len=2*n-1 ;
   start=0 ;
   end=len-1 ;
   int a[len][len] ;
    while(n!=0)
    {
        for (int i =start ; i <=end; i++)
        {
             for (int j = start; j <=end; j++)
                {
                     if(i==start || i==end ||j==start || j==end)
                             {
                                   a[i][j]=n ;
                             }
                } 
       }
     /* ++start ;
     --end ;
     --n ; */
     start++ ;
     end-- ;
     n-- ;

    }
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
        
    }
    
   
   
    

    return 0;
}