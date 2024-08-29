// #include<stdio.h>

// int main(){
//     int i = 1;
//     // Syntax od while loop
//     // while (/* condition */)
//     // {
//     //     /* code */
//     // }
//     return 0;
// }

// When to use?
// When we don't know how to use any condition in 'For Loop'. Then prefer 'While Loop' 

// Write a C program to perform countdown from n to 1.
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while (n--)
    {
        printf("%d ",n);
    }
    
    return 0;
}