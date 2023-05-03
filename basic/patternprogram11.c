#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
       {
         printf("%d",j);
        }
        for(k=i*2;k<=2*n-1;k++)
        {
            printf(" ");
        }
       for(j=i;j>=1;j--)
       {
         printf("%d",j);
        }
        printf("\n");
    }

    
}