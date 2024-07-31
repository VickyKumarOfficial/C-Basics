// Q. WAP to print sum of all the even digits of a given number.

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int a = 0, r;
    while (n != 0)
    {
        r = n%10;
        a = r*10+n;
    }
    printf("Last digit is :%d\n",a);
    
    return 0;
}