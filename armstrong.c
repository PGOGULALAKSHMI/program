#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	int n,t,s=0,a,c=0;
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		a=t%10;
		t=t/10;
		c++;
	}
	t=n;
	while(n!=0)
	{
		a=t%10;
		s=s+pow(a,c);
		t=t/10;
	}
	if(s==n)
	printf("armstrong number");
	else
	printf("not armstring number");
	return 0;
}
