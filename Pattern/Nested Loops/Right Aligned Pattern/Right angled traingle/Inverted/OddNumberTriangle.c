// Display the following pattern:
// 1
// 1 3
// 1 3 5
// 1 3 5 7


#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}