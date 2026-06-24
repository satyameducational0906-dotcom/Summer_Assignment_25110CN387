#include<stdio.h>

int main(){
    int balance=500,withdraw;

    printf("enter withdrawal amount :");
    scanf("%d",&withdraw);

    if(withdraw<=balance){
        balance = balance-withdraw;
        printf("remaining amount = %d",balance);

    }
    else
    printf("insufficient balance");

    return 0;
}