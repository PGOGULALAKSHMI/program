#include <stdio.h>

int main(void) {
	// your code goes here
	int f,l,i,j,c=0;
	scanf("%d %d",&f,&l);
	for(i=f;i<=l;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			c++;
		}
		if(c==0)
		printf(" %d",i);
	}
	return 0;
}
