#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i;

    fgets(str,sizeof(str),stdin);

    int len = strlen(str);

    for(i=len-1;i>=0;i--){
    if(str[i]!='\n')

    printf("%c",str[i]);
    }
    return 0;

}