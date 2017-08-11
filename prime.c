#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,c=0;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==0)
	printf("prime number");
	else
	printf("not prime");
	return 0;
}
