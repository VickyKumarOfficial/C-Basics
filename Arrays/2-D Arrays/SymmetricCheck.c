#include <stdio.h>

int main() {
    int r1, c1;
    printf("Enter row size and column size of matrix 'A': ");
    scanf("%d %d", &r1, &c1);
    
    int a[r1][c1];
    printf("Enter elements of matrix 'A':\n");
    for(int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    int symm = 1;
    for(int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            if (a[i][j] != a[j][i]) {
                symm = 0;
                break;
            }
        }
        if (symm == 0) {
            break;
        }
    }
    
    if (symm == 1) {
        printf("Symmetrical\n");
    } else {
        printf("Not Symmetrical\n");
    }
    
    return 0;
} 