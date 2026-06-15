
#include<stdio.h>
int main(){
    int a[10][10],t[10][10];
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
            t[i][j]==a[i][j];
        }
    }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                printf("%d",t[i][j]);

            }

        printf("\n");
    }
    

    return 0;
}

        