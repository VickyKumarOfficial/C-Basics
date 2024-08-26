// Q. WAP to print pattern of Number Square by taking number as input form the user.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        for (int i = 1; i <= n; i++){
            printf("%d ",i);
        }
        printf("\n");
    }
    
    return 0;
}