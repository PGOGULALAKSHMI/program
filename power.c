#include <stdio.h>

int main(void) {
	int n,b,r=1;
	scanf("%d %d",&n,&b);
	while(b!=0)
	{
		r=r*n;
		b--;
	}
	printf("%d",r);
	return 0;
}
