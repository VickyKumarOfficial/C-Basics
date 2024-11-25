#include <stdio.h>

int main() {
    int r, c;
    printf("Enter row size and column size of matrix 'A': ");
    scanf("%d %d", &r, &c);
    
    int a[r][c];
    printf("Enter elements of matrix 'A':\n");
    for(int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    int symm = 1;
    for(int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
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