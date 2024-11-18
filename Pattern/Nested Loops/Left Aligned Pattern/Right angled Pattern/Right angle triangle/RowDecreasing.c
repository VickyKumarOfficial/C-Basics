/*
    1
    2 1
    3 2 1
    4 3 2 1
*/

#include <stdio.h>

int main() {
    int n = 4;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j >= 1; j--) printf("%d ", j);
        printf("\n");
    }
    return 0;
}
