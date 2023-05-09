#include<stdio.h>
int mean(int n)
{
    int arr[20],i,sum=0,avg;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);

        sum=sum+arr[i];
    }

    avg=sum/n;
    return(avg);

}
int main()
{
   int n;
   printf("enter the number of elements:");
   scanf("%d",&n);
    
   printf("mean=%d",mean(n));
   
}