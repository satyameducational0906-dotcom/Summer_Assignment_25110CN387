#include<stdio.h>

int main(){
    char str[100];
    int i=0;
    int vowels = 0,consonents = 0;

    fgets(str,sizeof(str),stdin);

    while(str[i]!= '\0'){
        char ch = str[i];

        if(ch=='\n')
        break;

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'|ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='u'){
            vowels++;

        }
        elseif((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
            consonents++
        }
        i++;
    }

    printf("vowel = %d\n",vowels);
    printf("consonents = %d",consonents);

    return 0;
}
