// Q. WAP to print the factorial of first n numbers. Suppose I gave input of no. 6 so output should comes like: Factorial of 1 is 1, Factorial is 2 is 4...Factorial of 6 is 720.

#include<stdio.h>

int main(){
    int n, product = 1;
    printf("enter a number :");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        product = product * i;
        // To print everystep of factorial
        printf("The factorial of %d is :%d\n",i,product);
    }
    // to print only the end answer of input number's factorial
    // printf("product = %d",product);
    return 0;
}