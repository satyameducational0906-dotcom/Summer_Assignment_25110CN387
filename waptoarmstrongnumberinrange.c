#include<stdio.h>
int main (){
    int start,end,n,n1,r,sum;
    printf("enter star and end number :");
    scanf("%d%d",&start,&end);

    printf("armstrong number : ");

    for(n=start;n<=end;n++){
        n1=n;
        sum = 0;

        while(n1!=0){
            r = n1%10;
            sum = sum+r*r*r;
            n1=n1/10;
        }
        if(sum==n)
        printf("%d",n);
    }
    return 0;

}