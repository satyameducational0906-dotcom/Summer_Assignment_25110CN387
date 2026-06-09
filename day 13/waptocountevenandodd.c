#include<stab.h>
int main(){
    int a[5];
    int even = 0, odd = 0;
    printf("enter 5 element :");

    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        even++;
        else
        odd++;
        
    }
    printf("even number = %d\n" ,even);
    printf("odd number = %d\n" ,odd);
    return 0;
}