#include<stdio.h>
#include<stdbool.h>

int main(){
    int n = 7;
    // either you can initialize n value before or by taking input.
    // printf("Enter a number :");
    // scanf("%d",&n);
    for (int i = 1; i <= n; i++){   // outer loop -> rows
// using another variable in next 'for loop' instead of i is better, as same variable can result in error.
        for (int j = 1; j <= n-1; j++)   // inner loop -> columns
            printf("* ");
        printf("\n");      // This implies  
    }
    return 0;
}

