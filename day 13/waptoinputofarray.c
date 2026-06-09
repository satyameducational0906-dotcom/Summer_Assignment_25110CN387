#include<stdio.h>
int main(){
    int a[50],n,i;
    printf("enter number of element :");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("enter a[%d] :",i);
        scanf("%d",&a[i]);
        
    }
    printf("array element are :");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

return 0;
}
