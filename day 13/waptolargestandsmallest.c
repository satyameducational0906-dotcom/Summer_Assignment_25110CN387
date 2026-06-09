#include<stdio.h>
int main(){
    int a[100],n,i;

    printf("enter number of elemnt in array : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("a[%d] :",i);
        scanf("%d",&a[i]);
    }
    int max =a[0],min = a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max)
            max = a[i];
        if(a[i]<min)
            min = a[i];
        
    }
    printf("largest element = %d\n min element = %d",max,min);
    return 0;

}