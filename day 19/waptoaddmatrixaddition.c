#include<stdio.h>
int main(){
    int a[10][10],b[10][10],d[10][10];
    int r,c,i,j;

    printf("enter number of row and column :");
    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
        for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++)
    {
            d[i][j]=a[i][j]+b[i][j];

            printf("%d",d[i][j]);
    }
    printf("\n");
}
    return 0;
}

        