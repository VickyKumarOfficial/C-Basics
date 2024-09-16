// Q. WAP to print pattern of Number Square by taking number as input form the user.
// i. 1 1 1
//    2 2 2
//    3 3 3

// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++){
            
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// ii. 1234
//     1234
//     1234 

// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++){
            
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


// iii. 4444
//      3333
//      2222
//      1111
// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= n; j++){
            
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


// iv.  1  2  3  4 
//      5  6  7  8
//      9 10 11 12
//     13 14 15 16

// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     int x = n*n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++){
            
//             printf("%3d ",x); // %3d is used to display the pattern in an structred way.
//             x--;
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// v.  13 14 15 16  
//     9  10 11 12
//     5   6  7  8
//     1   2  3  4 


#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    // int x = n;
    for (int i = 1; i <= n; i++)
    {
        int x=i;
        for (int j = 1; j <= n; j++){
            
            printf("%3d ",x); // %3d is used to display the pattern in an structred way.
            x+=4;
        }
        printf("\n");
    }
    
    return 0;
}