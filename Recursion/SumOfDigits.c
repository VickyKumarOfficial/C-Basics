#include<stdio.h>
int digits(int n) {
    if(n==0) return 0;

    return n%10 + digits(n/10);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Sum of the digits = %d",digits(n));
    return 0;
}