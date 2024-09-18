// WAP to find the product of the digits of the given number

#include<stdio.h>

int main(){
    int n, r, p=1;
    printf("Enter a number :");
    scanf("%d",&n);
    while (n>0)
    {
        r=n%10;
        p=p*r;
        n=n/10;
    }
    printf("The product of the digits is: %d",p);
    return 0;
}