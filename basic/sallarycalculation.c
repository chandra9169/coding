#include<stdio.h>
void main()
{
   float total_sallary,pf,hra,da,allow,bs;
    char ch;
    printf("enter the basic sallary:");
    scanf("%f",&bs);
    printf("enter the grade:");
    scanf("%s",&ch);
    if(ch=='A')
    {
    allow=1700;
    }
    else if (ch=='B')
    {
    allow=1500;}
    else if (ch=='C')
   { allow=1300;
   }

    hra=0.2*bs;
    da=0.5*bs;
    pf=0.11*bs;
    total_sallary=bs+hra+da-pf+allow;
    printf("%f",total_sallary);
}