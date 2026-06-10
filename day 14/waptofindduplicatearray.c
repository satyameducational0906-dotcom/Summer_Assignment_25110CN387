#include<stdio.h>
int main(){
    int arr[100],n;
    printf("enter element :");
    scanf("%d",&n);
    printf("enter array element :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    
        int count =1;
        for(int j =i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>1){
            printf(" %d occur %d times\n",arr[i], count);
        }
     }
     return 0;

}
