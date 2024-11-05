// WAP to multiply two matrices taken as input.

// #include <stdio.h>

// // Function to multiply two matrices
// void multiplyMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows1, int cols1, int cols2) {
//     for (int i = 0; i < rows1; ++i) {
//         for (int j = 0; j < cols2; ++j) {
//             result[i][j] = 0;
//             for (int k = 0; k < cols1; ++k) {
//                 result[i][j] += mat1[i][k] * mat2[k][j];
//             }
//         }
//     }
// }

// // Function to display a matrix
// void displayMatrix(int mat[][100], int rows, int cols) {
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             printf("%d ", mat[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int mat1[100][100], mat2[100][100], result[100][100];
//     int rows1, cols1, rows2, cols2;

//     // Input dimensions of matrices
//     printf("Enter the number of rows and columns for the first matrix: ");
//     scanf("%d %d", &rows1, &cols1);

//     printf("Enter the elements of the first matrix:\n");
//     for (int i = 0; i < rows1; ++i) {
//         for (int j = 0; j < cols1; ++j) {
//             scanf("%d", &mat1[i][j]);
//         }
//     }

//     printf("Enter the number of rows and columns for the second matrix: ");
//     scanf("%d %d", &rows2, &cols2);

//     if (cols1 != rows2) {
//         printf("Matrix multiplication is not possible. Columns of the first matrix must be equal to rows of the second matrix.\n");
//         return 0;
//     }

//     printf("Enter the elements of the second matrix:\n");
//     for (int i = 0; i < rows2; ++i) {
//         for (int j = 0; j < cols2; ++j) {
//             scanf("%d", &mat2[i][j]);
//         }
//     }

//     // Multiply matrices
//     multiplyMatrices(mat1, mat2, result, rows1, cols1, cols2);

//     // Display the result
//     printf("Resultant matrix after multiplication:\n");
//     displayMatrix(result, rows1, cols2);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int mat1[100][100], mat2[100][100], result[100][100];
//     int r1, c1, r2, c2;

//     // Input dimensions of matrices
//     printf("Enter the number of rows and columns for the first matrix: ");
//     scanf("%d %d", &r1, &c1);

//     printf("Enter the elements of the first matrix:\n");
//     for (int i = 0; i < r1; ++i) {
//         for (int j = 0; j < c1; ++j) {
//             scanf("%d", &mat1[i][j]);
//         }
//     }

//     printf("Enter the number of rows and columns for the second matrix: ");
//     scanf("%d %d", &r2, &c2);

//     if (c1 != r2) {
//         printf("Matrix multiplication is not possible. Columns of the first matrix must be equal to rows of the second matrix.\n");
//         return 0;
//     }

//     printf("Enter the elements of the second matrix:\n");
//     for (int i = 0; i < r2; ++i) {
//         for (int j = 0; j < c2; ++j) {
//             scanf("%d", &mat2[i][j]);
//         }
//     }

//     // Multiply matrices
//     for (int i = 0; i < r1; ++i) {
//         for (int j = 0; j < c2; ++j) {
//             result[i][j] = 0;
//             for (int k = 0; k < c1; ++k) {
//                 result[i][j] += mat1[i][k] * mat2[k][j];
//             }
//         }
//     }

//     // Display the result
//     printf("Resultant matrix after multiplication:\n");
//     for (int i = 0; i < r1; ++i) {
//         for (int j = 0; j < c2; ++j) {
//             printf("%d ", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include<stdio.h>

int main(){
    int m, n, p, q;
    printf("Enter the row for matrix 1 :");
    scanf("%d", &m);
    printf("Enter the column for matrix 1 :");
    scanf("%d", &n);
    printf("Enter the row for matrix 2 :");
    scanf("%d", &p);
    printf("Enter the column for matrix 2 :");
    scanf("%d", &q);
    int a[m][n], b[p][q];
    if(n!=p) printf("Invalid Input!");
    else {
        printf("Enter the elements of matrix 1 :\n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);
        }
        printf("Enter the elements of matrix 2 :\n");
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) scanf("%d", &b[i][j]);
        }
        int res[m][q];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                res[i][j] = 0;
                for (int k = 0; k < n; k++) {
                    res[i][j] += a[i][k] * b[k][j];
                }
                
            }
            
        }
        printf("Matrix Multiplication :\n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) printf("%d ",res[i][j]);
            printf("\n");
        }

    }
    return 0;
}