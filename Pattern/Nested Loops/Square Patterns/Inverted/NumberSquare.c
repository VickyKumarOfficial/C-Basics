// WAP to display the following pattern:
// 4444
// 3333
// 2222
// 1111
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