// Q. WAP to take a input from user and print the star '*'square.

#include<stdio.h>

// int main(){
//     int x, y;
//     printf("Enter rows and columns :");
//     scanf("%d%d",&x,&y);
//     if(x==y){
//         for (int i = 1; i <= x ; i++){
//                 for (int i = 1; i <= y; i++){
//                 printf("*");
//                 }
//             printf("\n");
//         }
//     }
//     else printf("Invalid input! Rows and columns must be equal");
//     return 0;

//By taking only one input:
// As in square all sides are equal so taking one input also fine. And hence no if else required.

#include<stdio.h>

int main(){
    int x;
    printf("Enter a number :");
    scanf("%d",&x);
        for (int i = 1; i <= x ; i++){
                for (int i = 1; i <= x; i++){
                printf("* ");
                }
            printf("\n");
        }
    return 0;
}

