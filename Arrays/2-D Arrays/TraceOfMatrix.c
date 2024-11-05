#include <stdio.h>

int main() {
    int n, i, trace = 0;

    // Input size of matrix (for a square matrix)
    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    // Declare matrix
    int matrix[n][n];

    // Input matrix elements
    printf("Enter elements for the matrix:\n");
    for(i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate trace
    for(i = 0; i < n; i++) {
        trace += matrix[i][i];
    }

    // Display the trace
    printf("Trace of the matrix = %d\n", trace);

    return 0;
}
