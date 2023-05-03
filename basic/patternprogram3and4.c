#include <stdio.h>
  

void main()
{
    int i,j,k,n;
     printf("enter the n:");
    scanf("%d",&n);
  

    for ( i =1; i <= n; i++)
    {
    //    k=i;
        for (j =1; j <=i; j++)
        {
            printf("%c",(char)(64+i));
        }
  
         
       
        printf("\n");
        
    }
      for ( i =1; i <= n; i++)
    {
       k=i;
        for (j =1; j <=i; j++)
        {
           
            printf("%c",(char)(64+k));
            k++;
        }
  
         
       
        printf("\n");
        
    }
}