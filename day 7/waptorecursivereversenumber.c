#include<stdio.h>
void reverse(int n){
    if(n==0)
    return;

printf("%d",n%10);
reverse(n/10);
}
int main(){
    int n;
    printf("enter number :");
    scanf("%d",&n);

    revrese(n);
    return 0;
}
