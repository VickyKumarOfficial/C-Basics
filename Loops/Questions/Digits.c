// Q. WAP (Write a program) to count digits of a given number.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int a=0;
    while (n != 0){
        n = n/10;
        a++;
    }
    // for (int i = 10; n != 0; i++) { 
    //     n = n / 10;
    //     a++;
    // }
    // can't use "for loop" statment coz using 'i' makes no sense and hence not an good option.
    printf("The number of digits are %d\n",a);
    return 0;
}