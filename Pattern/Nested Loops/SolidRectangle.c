#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i = 0; i <= 5; i++){
        for (int i = 0; i <= n; i++)
            printf("*");
        // printf("*\n");        
    }

    return 0;
}