#include <stdio.h>

int main(){
    int n;
    printf("FIBONACCI\n");
    printf("Enter a number: ");
    scanf("%d",&n);
    unsigned long long int arr[] = {0,1,1,2};
    for(int i = 1;i <= n;++i){
        if(i < 3) printf("%lld ",arr[i]);
        else{
            printf("%lld ",arr[3]);
            arr[1] = arr[2];
            arr[2] = arr[3];
            arr[3] = arr[1] + arr[2];
        }
    }
}