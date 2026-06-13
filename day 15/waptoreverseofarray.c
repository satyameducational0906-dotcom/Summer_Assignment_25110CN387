#include<stdio.h>
int main(){
    int arr[100],n,i,temp;
    // kitne element lene h
    printf("enter number of element in array :");
    scanf("%d",&n);
    // input element in array
    printf("enter element in array :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // reverse of array 
    int start = 0;
    int end = n-1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end]; 
        arr[end] =temp;
        start++;
        end--;
    }
    // print reverse array 
    printf("reversed array :\n");
        for(i=0;i<n;i++){
            printf("%d",arr[i]);
        }
        return 0;
    }


