#include<stdio.h>
int main(){
    int n,a=0,b=1,c;
    printf("enter n :");
    scanf("%d",&n);

    if(n==0)
    printf("nth fibonacci term = 0");
    else if(n==1)
    printf("nth fibonacci term = 1");
    else{
        for(int i=2;i<=n;i++){
            c = a+b;
            a = b;
            b = c;
        }
        printf("nth fibonacci term is %d",b);
    }
    return 0;
}