#include<stdio.h>
int main(){
    int n, arr[100];
    printf("enter element ");
    scanf("%d",&n);

    printf("enter element :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int last = arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0]=last;
    printf("array after right rotation : \n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;

}