// Q. Print first n numbe of Febonacci series like how we have done in printing the first n numbers of Factorial.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int a = 1, b = 1, sum = 1;
    for (int i = 1; i <= n-2; i++){
        sum = a + b;
        a = b;
        b = sum;
        printf("The %d Fibonnaci number is :%d\n",i,sum);
    }
    // printf("The %dth term of fibonacci is :%d",n,sum);
    return 0;
}