#include<stdio.h>
int main(){
    int a[10][10],r,c;
    int sum,i,j;

    printf("enter row and column n*n:");
    scanf("%d %d",&r,&c);

    printf("enter element :\n");
    for( i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    for(j=0;j<c;j++){
         sum =0;
        for( i=0;i<r;i++){
        sum = sum + a[i][j];
        }
        printf("sum of column %d = %d\n",j+1,sum);
    }
    
    return 0;
}