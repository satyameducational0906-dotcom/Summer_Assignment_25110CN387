#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int freq[256]={0};

    fgets(str,sizeof(str),stdin);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='\n')
        freq[str[i]]++;
    }
    int max=0;
    char ch;

    for(int i=0; str[i]!='\0';i++){
        if(str[i]!='\n' && freq[str[i]]>max){
            max = freq[str[i]];
            ch = str[i];
        }
    }
    printf("%c",ch);
    return 0;
}