// Q. Print all the Alphabets and their ASCII values.
// New -> 'Typecasting'

#include<stdio.h>

int main(){
    // What is Typecasting:
    int x = 65;
    printf("%d\n",x);
    char ch = (char)x; // It means in 'char' Data type we are creating a variable "ch" where we store x value in char type. (char)x;
                       // udhar (char) hai to it will be print alphabet similarly if we write int then alphabet corresponds that value will print.
    printf("%c",ch);
    char ch = 'A';
    printf("%c\n",ch);
    int x = (int)ch; // here (int) is there to print respective char (alphabet) value in int data type.
    printf("%d",x);
    return 0;
}

// Actual code:

#include<stdio.h>

int main(){
    for (int i = 65; i <= 90; i++){
        printf("%d-",i);
        char ch = (char)i;
        printf("%c\n",i);
    }
    
    return 0;
}