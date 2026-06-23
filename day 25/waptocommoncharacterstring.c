#include<stdio.h>
#include<string.h>

int main(){
    char s1[100],s2[100];
    int i,j;

    fgets(s1,sizeof(s1),stdin);
    fgets(s2,sizeof(s2),stdin);

    for(i=0;s1[i]!='\0';i++){
        for(j=0;s2[j]!='\0';j++){
            if(s1[i]==s2[j]){
                printf("%c",s1[i]);
                break;
            }
        }
    }

    return 0;
}