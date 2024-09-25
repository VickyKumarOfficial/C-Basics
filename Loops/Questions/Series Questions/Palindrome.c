// Check whether the given number is palindrome number or not.
// eg. 101, on reversing the digits it remains same.

#include<stdio.h>

int main(){
    int n, rev=0, org, rem;
    printf("Enter a number :");
    scanf("%d",&n);
    org = n;
        while(n){
            rem = n % 10;
            rev = rev * 10 + rem;
            n /= 10;
        }
        if(rev==org) printf("It is a palindrome");
        else printf("It is a not a palindrome");
    return 0;
}