// Q. Print the patter in numbers of difference of 2

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
        for(int j = 1; j <= n; j=j+2)
        printf("%d",n);
        printf("\n");
    }
    
    return 0;
}