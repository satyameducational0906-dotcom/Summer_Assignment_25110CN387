#include<stdio.h>
int main(){
    int n,i,largestprime = 1;
    printf("enter number :");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0){
            largestprime = i;
            n = n/i;
        }
    }
    printf("largest prime factor = %d",largestprime);
    return 0;

}
