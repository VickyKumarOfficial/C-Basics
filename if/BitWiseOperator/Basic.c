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
// Bitwise and- &
// Bitwise or- |
// Bitwise not- ~
// Bitwise for (exclusive or)- ^
// Bitwise left shift- <<
// Bitwise right shift- >>


// Bitwise and- &
// Both the values should be true.

// Bitwise or- |
// Any one can be true 

#include<stdio.h>

int main(){
    int a=12, b=10, c;
    c=a&b;
    printf("Bitwise And operator result = %d %o %X\n",c,c,c);
    c=a|b;
    printf("Bitwise And operator result = %d %o %X",c,c,c);

    // Using Not Bitwise operator
    c=~a;
    return 0;
}