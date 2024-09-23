// Q. WAP to print the nth term of 'Fibonacci number'.

// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     int a = 0, b = 1, sum = 0;
//     for (int i = 1; i <= n-2; i++){
//         sum = a + b;
//         a = b;
//         b = sum;
//     }
//     if (n == 2) sum = 1;
//     printf("The %dth term of fibonacci is : %d",n,sum);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n, first = 0, second = 1, next;
    
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
    
//     printf("Fibonacci Series up to %d terms:\n", n);
    
//     for (int i = 0; i < n; i++) {
//         if (i <= 1) {
//             next = i;
//         } else {
//             next = first + second;
//             first = second;
//             second = next;
//         }
//         printf("%d ", next);
//     }
    
//     printf("\n");
    
//     return 0;
// }
#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    
    int our_points = 2 * x + y;
    int opponent_points = 2 * z + y;
    int remaining_games = 8 - (2 * x + 2 * z + 2 * y);
    
    if (our_points + remaining_games > opponent_points) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}