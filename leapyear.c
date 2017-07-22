#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
  while(n>0)
  {
if(n%400==0)
printf("leap year");
else if(n%100==0)
printf("not leap year");
else if(n%4==0)
printf("leap year");
  }
}
