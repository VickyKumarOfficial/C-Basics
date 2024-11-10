#include <stdio.h>

int main() {
    int n, i, trace = 0;

    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements for the matrix:\n");
    for(i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        trace += matrix[i][i];
    }

    printf("Trace of the matrix = %d\n", trace);

    return 0;
}
