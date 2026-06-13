#include<stdio.h>
int main(){
    int a[100],b[100];
    int n,m;

    printf("enter size of  1st array :");
    scanf("%d",&n);

    printf("enter element :");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("enter size of 2nd array :");
    scanf("%d",&m);

    printf("enter element :");
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
   }

   printf("intersection element :");

   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    if(a[i]==b[j]){
        printf("%d",a[i]);
        break;
    }
   }

}