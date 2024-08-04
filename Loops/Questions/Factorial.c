// Q. WAP to print the factorial of given number

#include<stdio.h>

int main(){
    int n, sum = 1;
    printf("enter a number :");
    scanf("%d",&n);
    for (int i = n; i != 1; i--)
    {
        sum = sum * i;
    }
    printf("sum = %d",sum);
    return 0;
}

// 2nd Method with 'while loop':

#include<stdio.h>

int main(){
    int n, sum;
    printf("Enter a number :");
    scanf("%d",&n);
    sum = 1;
    while (n!=1){
        sum = sum * n;
        n--;
    }
    printf("The sum is:%d",sum);
    return 0;
}