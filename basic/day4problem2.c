#include<stdio.h>
int statics(int n)
{
    int i,j,arr[20];
    int median;
    
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    if(n%2==0)
    {
        median=(arr[n/2]+arr[1+n/2]);
    }
    else{
        median=arr[1+n/2];
    }

    return(median);
   
}

int main()
{
   int n;
   printf("enter the number of elements:");
   scanf("%d",&n);
    
   printf("median=%d",statics(n));
   
}