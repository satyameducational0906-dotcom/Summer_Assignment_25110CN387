#include<stdio.h>
#include<string.h>

int main(){
    char a[100],b[100];
    int freq[256]={0};

    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);

    for(int i=0;a[i]!='\0';i++){
        if(a[i]!='\n')
        freq[a[i]]++;
    }
    for(int i=0;b[i]!='\0';i++){
        if(b[i]!='\n')
        freq[b[i]]--;
    }

    int flag=1;
    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            flag=0;
            break;
        }

    }
    if(flag)
    printf("anagram");
    else
    printf("not anagram");

    return 0;


}