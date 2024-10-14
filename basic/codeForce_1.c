#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j;
    scanf("%d", &n);
    int k=n ;
  	// Complete the code to print the pattern.

    for ( i = 1; i <= (2*n-1); i++)
    {
        for (j = 1; j <=(2*n-1); j++)
        {
            if( i==1 || i==(2*n-1) || j==1 || j=(2*n-1))
            {
                printf("%d",k);
            }
            else
            printf(" ");

        }
        k-- ;
        printf("\n"); 
    }
    return 0;
}