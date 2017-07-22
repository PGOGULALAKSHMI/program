#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if((a>b)&&(a>c))
printf("a is big");
else if(b>c)
printf("b is big");
else if(c>a)
printf("c is big");
else
printf("all equal");
return 0;
}
