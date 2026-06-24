#include<stdio.h>

int main(){
    int rollno;

    char name[20];
    float marks;

    printf("enter roll no ");
    scanf("%d",&rollno);

    printf("enter name :");
    scanf("%s",name); 

    printf("enter marks :");
    scanf("%f",&marks);

    printf("student record \n");
    printf("roll no = %d\n",rollno);
    printf("name = %s\n",name);
    printf("marks =%2f\n",marks);

    return 0;

}