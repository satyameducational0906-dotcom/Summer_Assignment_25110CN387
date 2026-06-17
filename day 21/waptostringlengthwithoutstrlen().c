#include<stdio.h>
int main(){
    char str[100];
    int i=0,length=0;
// input string
    gets(str);

    while(str[i]!='\0'){
        length++;
        i++;
        }
printf("string length = %d",length);
return 0;
}