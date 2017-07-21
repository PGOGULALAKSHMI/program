#include<stdio.h>
int main()
{
char a,b[5]={'a','e','i','o','u'};int i,c=0;
scanf("%c",&a);
for(i=0;i<5;i++)
{
if(a==b[i])
c++;
}
if(c==1)
printf("vowel");
else
printf("not vowel");
return 0;
}
