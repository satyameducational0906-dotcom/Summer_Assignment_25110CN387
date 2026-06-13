#include<stdio.h>
int main(){
    int a[100],b[100],c[200];
    int n1,n2,i,j,k=0,flag;

    printf("enter size of 1st array :");
    scanf("%d",&n1);
     printf("enter element");
     for(i=0;i<n1;i++)
     scanf("%d",&a[i]);

     printf("enter size of 2nd array :");
     scanf("%d",&n2);

     printf("enter element :");
     for(i=0;i<n2;i++)
     scanf("%d",&b[i]);

     flag = 0;

     for(j=0;j<k;k++){
     if (c[j]== b[i]){
        flag =1;
        break;
     }

     if(flag==0){
        c[k++] = b[i];
     }

     printf("union of array :");
     for(i=0;i<k;i++){
        printf("%d",c[i]);
     }

    }
    return 0;



}