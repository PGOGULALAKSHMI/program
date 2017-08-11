#include <stdio.h>
int main(void) {
	// your code goes here
	int n,t,rem,rev=0;
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		rem=t%10;
		rev=rev*10+rem;
		t/=10;
	}
	if(rev==n)
	printf("palindrome");
	else
	printf("not palindrome");
	return 0;
}
