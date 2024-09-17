// WAP to print pattern of Number Square by taking number as input form the user.
//  1 1 1
//  2 2 2
//  3 3 3

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++){
            
            printf("%d ",i);
        }
        printf("\n");
    }
    
    return 0;
}