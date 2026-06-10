#include<stdio.h>
int main(){
    int a[100],n,i,key;

    printf("enter no of elements :");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("enter element:");
        scanf("%d",&a[i]);
    }
    printf("enter searching element :");
    scanf("%d",&key);
    
    for(i=0;i<n;i++){
        if(key==a[i]){
            printf("element  is found at %d index value",i+1);
            return 0;
        }
    }
        printf("element is not found");
        return 0;

    }
