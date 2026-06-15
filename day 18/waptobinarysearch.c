#include<stdio.h>
int main(){
    int arr[100],n,i,key ,beg,end,mid;

    printf("enter size of array :");
    scanf("%d",&n);

    
    printf("enter sorted element :");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    printf("enter element to search :");
    scanf("%d",&key);

    beg=0;
    end=n-1;

    while(beg<=end){
        mid = beg+end/2;

        if(arr[mid]==key){
            printf("element found at index %d",mid);
            return 0;

        }

        else if(arr[mid]<key){
            beg = mid+1;

        }

        else{
            end = mid-1;
        }
    }
    printf("element is not found");
    return 0;




}