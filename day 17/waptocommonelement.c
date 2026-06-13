#include<stdio.h>
int main(){
    int n,m, a[100],b[100];
    int i,j;

    printf("enter size of first array :");
    scanf("%d",&n);

    printf("enter element :");
    for( i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("enter size of 2nd array :");
    scanf("%d",&m);

    print("enter element :");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
     printf("common element :");
     for( i=0;i<n;i++){
        for( j=0;j<m;j++){
            if(a[i]==b[j]){
                printf("%d",a[i]);
                break;
            }
        }
     }
     return 0;
}