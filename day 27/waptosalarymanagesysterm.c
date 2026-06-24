#include<stdio.h>

int main(){
    float basic,hra,da,gross;

    printf("enter basic salary :");
    scanf("%f",&basic);

    hra = basic*0.20;
    da = basic*0.10;

    gross = basic+hra+da;

    printf("hra = %2f\n",hra);
    printf("da = %2f\n",da);
    printf("gross salary = %2f\n",gross);
    return 0;
}