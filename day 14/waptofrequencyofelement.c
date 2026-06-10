#include<stdio.h>
int main(){
    int a[100],n,i,key,count=0;
    printf("enter no of element :");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("enter element :");
        scanf("%d",&a[i]);

    }
    printf("enter key elementt :");
        scanf("%d", &key);

    for(i=0;i<n;i++){
        if(a[i]==key)
        count++;
    }
    printf("frequency = %d",count);
    return 0;
}