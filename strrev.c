#include <stdio.h>
#include<string.h>

int main(void) {
	char a[20];
	gets(a);
	strrev(a);
	printf("%s",a);
  return 0;
}
