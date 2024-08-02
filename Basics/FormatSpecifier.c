// Q. Write a program (WAP) on taking a & b variables storing 10 & 20 in it. Take any other variable to display the output in any variable by format specifier.
// Note : output should be look like this - 10 x 20 is 200 (Use format Specifier to print the numbers).

#include<stdio.h>

int main(){
    int a, b, c;
    a = 10;
    b = 20;
    c = a*b;
    printf("%d x %d is %d",a, b, c);
    return 0;
}

// Q. WAP, take 2 variablees with value 100 and 200. and print it with third variable as a product.
// Note : output should look like "'___' is the product of '___' and '___'" 

#include<stdio.h>

int main(){
    int a, b, c;
    a = 100;
    b = 200;
    c = 2000;
    printf("%d is the product of %d and %d",c, b, a);
    return 0;
}

// Q. Take two variable r and h with value 2.5 & 5.6 respectively and print the Volume of a cone.
// Note : output should be displayed as "Volume of a cone is '___' for radius '___' and height '___'" with the help of "format specifeir"!

#include<stdio.h>

int main(){
    float r, h;
    r = 2.5;
    h = 5.6;
    float Pi = 3.14;
    float V = 0.33*(Pi*r*r*h);
    printf("Volume of cone is %.3f for radius %.1f and height %.1f", V, r, h);
    return 0;
}