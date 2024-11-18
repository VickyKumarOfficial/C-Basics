/*
        *
      * * * 
    * * * * *
*/

// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n-i; j++) {
//             printf(" ");
//         }
//             for (int k = 1; k <= 2*i-1; k++) {  // using mathematical formula
//                 printf("*");
//             }
//     printf("\n");
//     }
    
//     return 0;
// }

// Alternate method

#include<stdio.h>

int main(){
    int n = 5, a = 1;
    // printf("Enter the no. of lines = "); scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i; j++) printf("  ");
        for (int k = 1; k <= a; k++) printf("%d ",k);
        // for (int l = 1; l <= i; l++) printf("%d ",l);
        a += 2;
        printf("\n");       
    }
    return 0;
}