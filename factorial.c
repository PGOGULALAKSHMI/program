#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	int n,i,f=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	f=f*i;
	printf("%d",f);
    return 0;
}
