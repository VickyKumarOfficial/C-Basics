#include<stdio.h>
int main(){
    int n, a[n];
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Enter data into the arra :");
    int i;
    for(i = 0; i <= n-1; i++){
        scanf("%d",&a[i]);
    }
    printf("Array is :");
    for(i = 0; i <= n-1; i++){
        printf("%d ",a[i]);
    }
    int x;
    printf("Enter the data you need to search :");
    scanf("%d",&x);
    while(n){
        if(x==a[i]){
            printf("Data Found!");
            break;
        }
        else printf("Data not Found!");
    }

    return 0;
}