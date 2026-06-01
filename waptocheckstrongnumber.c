#include<stdio.h>
int main(){
    int n,n1,r,sum=0,fact,i;
    printf("enter number :");
    scanf("%d",&n);
    n1=n;
    while(n1>0){
        r=n1%10;
        fact =1 ;
        for(i=1;i<=r;i++){
            fact = fact*i;
        }
        sum = sum+fact;
        n1=n1/10;
    }
    if(sum==n)
    printf("%d is a strong number",n);
    else
    printf("%d is not strong number",n);
    return 0;
}