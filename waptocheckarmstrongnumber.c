#include<stdio.h>
int main(){
    int n ,n1,r,sum = 0;

    printf("enter number :");
    scanf("%d",&n); 
    n1 = n;
    while(n1!=0 ){
        r = n1%10;
        sum = sum+r*r*r;
        n1 = n1/10;
    }
    if (sum == n)
    printf("armstrong number");
    else 
    printf("not armstrong number");
    return 0;
}