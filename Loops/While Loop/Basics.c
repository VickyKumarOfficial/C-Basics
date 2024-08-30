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
// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
    
//     while (n--)
//     {
//         printf("%d ",n);
//     }
    
//     return 0;
// }

// Write a C program to print hello for n times
// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     while (n--)
//     {
//         printf("Hello ");
//     }
    
//     return 0;
// }

// Write a C program to display -n to +n for the given n value. For eg- if n value is given as 3, ouput should be like -3, -2, -1, 0, 1, 2, 3.
// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     int i = -n;
//     while (i<=n )
//     {
//         printf("%d, ",i);
//         i++;
//     }
    
//     return 0;
// }

// Write a C program to show up to n even numbers.
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int i = 2;
    while (i<=n)
    {
        printf("%d ",i);
        i = i+2;
    }
    
    return 0;
}

// Write a C program to display all uppercase letters.