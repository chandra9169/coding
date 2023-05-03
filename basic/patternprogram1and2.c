#include <stdio.h>
  

void main()
{
    int i,j,k,n=4;
     printf("enter the n:");
    scanf("%d",&n);
  

    for ( i =1; i <= n; i++)
    {
       k=i;
        for (j =1; j <=i; j++,k++)
        {
            printf("%d",k);
        }
  
         
       
        printf("\n");
        
    }
}