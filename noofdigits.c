#include <stdio.h>

int main(void) {
	int n,c=1;
	scanf("%d",&n)
	while(n>10)
	{
		n=n/10;
		c++;
	}
	printf("%d"c);
	return 0;
}
