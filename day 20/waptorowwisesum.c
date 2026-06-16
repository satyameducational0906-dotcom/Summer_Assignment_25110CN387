#include<stdio.h>
int main(){
    int a[10][10],r,c;

    printf("enter row and column :");
    scanf("%d %d",&r,&c);

    printf("enter element :\n");
    for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
    scanf("%d",&a[i][j]);

    int sum = 0;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum = sum + a[i][j];
        }    
        printf("sum of row %d is %d\n",i+1,sum);
    }
    return 0;
}