// Just to show how a data can be shown in different data types by using different format specifeirs.
// #include<stdio.h>

// int main(){
//     int a = 84;
//     printf("The value of a in Decimal = %d\n",a);
//     printf("The value of a in Octal = %o\n",a);
//     printf("The value of a in hexa Decimal = %x\n",a);
//     printf("The value of a in hexa Decimal = %X\n",a);
//     printf("The value of a in Alphabet = %c\n",a);
//     return 0;
// }

// Bitwise operators
// Bitwise and - &
// Bitwise or - |
// Bitwise not/Negation - ~ (0 becomes 1 and vice versa)
// Bitwise for (exclusive or) - ^ (if both are same it will be true else same then false)
// Bitwise left shift - <<
// Bitwise right shift - >>


// Bitwise and - &
// Both the values should be true.

// Bitwise or - |
// Any one can be true 

// #include<stdio.h>

// int main(){
//     int a=12, b=10, c;
//     c=a&b;
//     printf("Bitwise And operator result = %d %o %X\n",c,c,c);
//     c=a|b;
//     printf("Bitwise And operator result = %d %o %X",c,c,c);

//     // Using 'Not' (~) Bitwise operator
//     c=~a;
//     return 0;
// }

// Q. Write a C program to swap two given numbers using Bit-wise operator.

#include<stdio.h>

int main(){
    int x, y;
    printf("Enter any two number :");
    scanf("%d %d",&x, &y);
    x = x^y;
    y = x^y;
    x = x^y;
    printf("After bit wise Xor operator swap a=%d , b=%d",x,y);
    return 0;
}