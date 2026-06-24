#include<stdio.h>

int main(){
    int m1,m2,m3,m4,m5;
    int total;
    float percentage;

    printf("entermarks of 5 sub :\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    total = m1+m2+m3+m4+m5;

    percentage = total/5.0;

    printf("\n     MARKSHEET   \n");
    printf("total = %d\n",total);
    printf("percentage = %2f\n",percentage);

    if(percentage>=40)
    printf("result = pass");
    else
    printf("result = fail");
    return 0;

}