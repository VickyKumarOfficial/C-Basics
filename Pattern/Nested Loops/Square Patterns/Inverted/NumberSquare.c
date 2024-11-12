// WAP to display the following pattern:
// 4 4 4 4
// 3 3 3 3
// 2 2 2 2
// 1 1 1 1
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++){
            
            printf("%d ",i);
        }
        printf("\n");
    }
    
    return 0;
}