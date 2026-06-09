#include<stdio.h>
int main(){
    int a[5],sum=0,n,i;
    float avg;
    printf("enter five element :");
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        printf("enter a[%d] : ",i);
        scanf("%d",&a[i]);
        sum = sum + a[i];

    }
    avg = (float)sum/5;

    printf("sum = %d\n",sum);
    printf("average = %.2f",avg);
    return 0;
}