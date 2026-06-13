#include<stdio.h>
int main(){
    int n,arr[100],i;
    // size of array
    printf ("enter size of array :");
    scanf("%d",&n);

    // user se input lena array ka
    printf("enter element :");
    for(i=0;i<n;i++){
        scanf("%d",&n);
    }

    // left rotate array by one position

    //store 1st element

    int first = arr[0]; 
    for(i=0;i<n-1;i++){
        //shift each element to left
        arr[i] = arr[i+1];
        arr[n-1] = first; //put first element at end
    }
    printf("left rotated array :\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;

}