// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             printf(" ");
            
//         }
//             for (int k = 1; k <= 2*i-1; k++)
//             {
//                 printf("*");
//             }
            
//         printf("\n");
//     }
    
//     return 0;
// }

// Alternate method

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :"); scanf("%d",&n);
    int a = 1;
    for (int i = 1; i <= n; i++){
        for (int k = 1; k <= n-i; k++){
            printf(" ");
        }
        for(int j = 1; j <= a; j++){
            printf("*");
        }
        a += 2;
        printf("\n");
    }
    return 0;
}