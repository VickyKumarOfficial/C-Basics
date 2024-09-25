// Print all the palidrom numbers between any two given numbers.

// Check whether the given number is palindrome number or not.
// eg. 101, on reversing the digits it remains same.

#include<stdio.h>

int main(){
    int n1, n2, rem;
    printf("Enter a number :");
    scanf("%d %d",&n1,&n2);
    for (int i = n1; i <= n2; i++){
        int org = i, n = i, rev = 0;
        
        while(n){
            rem = n % 10;
            rev = rev * 10 + rem;
            n /= 10;
        }
        if(rev==org) printf("%d ", rev);
    }
    return 0;
}