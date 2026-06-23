#include<stdio.h>
#include<string.h>

int main(){

    char words[5][20],temp[20];
    int i,j;

    for(i=0;i<5;i++){
        scanf("%s",word[i]);
    }

    for(i=0;i<5;i++){
        for(j=j+1;j<5;j++){
            if(strlen(words[i])>strlen(words[j])){
                strcpy(temp,words[i]);
                strcpy(words[i],words[j]);
                strcpy(words[j],temp);
            }
        }
    }

    for(i=0;i<5;i++)
    printf("%s\n",words[i]);

    return 0;
}