#include<stdio.h>
int main(){
    int a[10][10];
    int n,i,j;
    int primary =0,secondary = 0;
    
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

            for(i=0;i<n;i++){
                primary = primary + a[i][j];
                secondary = secondary + a[i][n-i-1];
            }

            printf("primary = %d\n",primary);
            printf("secondary = %d\n",secondary);
            return 0;

    }
