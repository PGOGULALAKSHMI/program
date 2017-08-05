#include <stdio.h>
#include <stdlib.h>
 
int main(){
    char inputString[20];
    gets(inputString);
    printf("Integer: %d \n", atoi(inputString));
    return 0;
}
