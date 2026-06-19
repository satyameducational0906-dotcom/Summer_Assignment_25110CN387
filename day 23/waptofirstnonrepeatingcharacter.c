#include<stdio.h>
#include<string.h>
int main(){

    char str[100];
    int freq[256]={0};
    fgets(str,sizeof(str),stdin);

    // frequency count

    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='\n')
        freq[str[i]]++;
    }

    // find first non repeating
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='\n' && freq[str[i]]==1){
            printf("%c",str[i]);
            break;
        }
    }
    return 0;

}