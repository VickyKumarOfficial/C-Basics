// Q. Print the nth term of 'Fibonacci number'.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    long long a = 0, b = 1, sum = 0;
    for (int i = 1; i <= n-2; i++){
        sum = a + b;
        a = b;
        b = sum;
    }
    if (n == 2) sum = 1;
    printf("The %dth term of fibonacci is : %lld", n, sum);
    return 0;
}