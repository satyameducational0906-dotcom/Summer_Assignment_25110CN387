#include<stdio.h>

int main(){
    char str[200];
    int i,count =0;

    printf("enter sentence :");
    fgets(str,sizeof(str),stdin);

    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '&& str[i+1]!=' ' && str[i+1]!='\0')
        count++;
    }

    printf("words = %d",count+1);

    return 0;
}