// Q. WAP to print the sum of given number and it's reverse.

#include<stdio.h>

int main(){
    int n, sum, Revno = 0, remainder;
    printf("Enter a number :");
    scanf("%d",&n);
    while (n) {
            remainder = n % 10;
            Revno = Revno * 10 + remainder;
            n = n / 10;
    }
    // printf("Reversed number is :%d\n",Revno);
    // printf("and initial given number is :%d\n",n);
    // sum = Revno + n;
    // printf("The total sum of both the number is :%d",sum);
    sum = n / 10;
    printf("Reversed number is :%d\n");
    return 0;
}