#include<stdio.h>
int main(){
    char answer;

    printf("what is the capital of india? \n");
    printf("a. delhi\n b.mumbai\n ");
    printf("enter answer :");
    scanf("%c",&answer);

    if(answer=='a'|| answer=='A')
    printf("CORRECT ANSWER");

    else
    printf("WRONG ANSWER");

    return 0;

}