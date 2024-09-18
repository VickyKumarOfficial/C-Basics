// Q. WAP (Write a program) to count digits of a given number.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int a=0;

    // Solved by while loop
    // while (n != 0){
    //     n = n/10;
    //     a++;
    // }

    // Solved by for loop
    // for (int i = 10; n != 0; i++) { 
    //     n = n / 10;
    //     a++;
    // }
    
    printf("The number of digits are %d\n",a);
    return 0;
}