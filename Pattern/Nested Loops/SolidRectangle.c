// #include<stdio.h>
// #include<stdbool.h>

// int main(){
//     int n = 7;
//     // either you can initialize n value before or by taking input.
//     // printf("Enter a number :");
//     // scanf("%d",&n);
//     for (int i = 1; i <= n; i++){   // outer loop -> rows
// // using another variable in next 'for loop' instead of i is better, as same variable can result in error.
//         for (int j = 1; j <= n-1; j++)   // inner loop -> columns
//             printf("* ");
//         printf("\n");      // This implies  
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n, term = 1, diff=0;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         printf("%d ", term);
//         diff++;
//         term += diff;
//     printf("The series is: %d",term);
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    int n;
    float term = 1.0;
    float diff = 0.1;

    // Taking input for how many terms to display
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Display the series
    printf("The series is: ");
    for (int i = 1; i <= n; i++) {
        printf("%.1f ", term);
        
        // Alternating the increment between 0.1 and 0.3
        if (i % 2 != 0) {
            term += 0.1;
        } else {
            term += 0.3;
        }
    }

    return 0;
}
