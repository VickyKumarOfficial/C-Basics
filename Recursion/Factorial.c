#include<stdio.h>

int factorial(int n) {
    if (n < 2) return 1;
    // if (n < 0) printf("Invalid Input!");
    return n * factorial(n-1);
}

int main(){
    int n; printf("Enter a number : "); scanf("%d", &n);
    // int result = factorial(n);
    // printf("Factorial = %d",result);
    printf("Factorial = %d",factorial(n));
    return 0;
}