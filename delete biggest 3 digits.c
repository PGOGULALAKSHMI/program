#include <stdio.h>

int main(void) {
	// your code goes here
	int a[5],i,j,s,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				s=a[i];
				a[i]=a[j];
				a[j]=s;
			}
		}
	}
	for(i=0;i<n-3;i++)
	{
		printf("%d",a[i]);
	}
	
	return 0;
}
