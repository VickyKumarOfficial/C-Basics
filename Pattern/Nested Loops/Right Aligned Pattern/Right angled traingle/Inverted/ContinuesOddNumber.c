// Display the following pattern :
// 1
// 3 5
// 7 9 11

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%3d ",a);
            a = a + 2;
        }
        printf("\3");
    }
    
    return 0;
}