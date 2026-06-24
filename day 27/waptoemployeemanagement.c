#include<stdio.h>

int main(){
    int empid;
    char empname[20];
    float salary;

    printf("enter employee id :");
    scanf("%d",&empid);

    printf("enter employ name :");
    scanf("%s",empname);

    printf("enter salary :");
    scanf("%f",&salary);

    printf("employee details :");
    printf("id = %d\n",empid);
    printf("name = %s \n",empname);
    printf("salary = %2f\n",salary);

    return 0;


}