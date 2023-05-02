#include <stdio.h>
  

void main()
{
    int i,j,k,n;
    printf("enter the n:");
    scanf("%d",&n);
  

    for ( i = 1; i < n; i++)
    {
 
        for (j = 0; j < n-i; j++)
            printf("  ");
  
   
        for (k = 0; k != 2*i-1; k++)
            printf("* ");
  
        printf("\n");
        
    }
   for (i = n; i >= 1; --i) {
      for (j = 0; j < n - i; ++j)
         printf("  ");
      for (k = i; k <= 2 * i - 1; ++k)
         printf("* ");
      for (k = 0; k < i - 1; ++k)
         printf("* ");
      printf("\n");
   }
}
