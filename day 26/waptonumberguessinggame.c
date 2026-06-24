#include<stdio.h>

int main(){
    int secret = 5,guess;

    printf("guess a number (1to10):");
    scanf("%d",&guess);

    if(guess==secret)
    printf("correct guess!");
    else
    printf("wrong guess!");
    return 0;
}