// Q. WAP (Write a program) to print the sum of digits of a given number.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int sum = 0;
    int LD = 0;
    while (n!=0) {
        LD = n%10;
        sum += LD;
        n = n/10;
    }
    printf("The sum of the number is :%d",sum);
    return 0;
}