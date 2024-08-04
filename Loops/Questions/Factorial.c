// Q. WAP to print the factorial of given number

#include<stdio.h>

int main(){
    int n, product = 1;
    printf("enter a number :");
    scanf("%d",&n);
    for (int i = n; i != 1; i--)
    {
        product = product * i;
    }
    printf("product = %d",product);
    return 0;
}

// 2nd Method with 'while loop':

#include<stdio.h>

int main(){
    int n, product = 1;
    printf("Enter a number :");
    scanf("%d",&n);
    while (n!=1){
        product = product * n;
        n--;
    }
    printf("The sum is:%d",product);
    return 0;
}