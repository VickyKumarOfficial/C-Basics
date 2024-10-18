#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int b[n];
    printf("Enter the numbers :");
    for(int i = 0; i <= n-1; i++){
        scanf("%d",&b[i]);
    }
    printf("The list of the given data is :");
    for(int i = 0; i <= n-1; i++){
        printf("%d ",b[i]);
    }

    return 0;
}