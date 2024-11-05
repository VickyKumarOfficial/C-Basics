#include <stdio.h>

int main() {
    int m, n, i, j;

    // Input size of matrix
    printf("Enter number of rows (m) and columns (n): ");
    scanf("%d %d", &m, &n);

    // Declare matrix
    int matrix[m][n];

    // Input matrix elements
    printf("Enter elements for the matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate row-wise sum
    for(i = 0; i < m; i++) {
        int sum = 0;
        for(j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, sum);
    }

    return 0;
}
