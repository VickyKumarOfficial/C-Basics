#include <stdio.h>

int main() {
    int array[6], i, j, temp;

    printf("Enter 6 integers: ");
    for (i = 0; i < 6; ++i) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < 6 - 1; ++i) {
        for (j = 0; j < 6 - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Sorted array in ascending order: ");
    for (i = 0; i < 6; ++i) {
        printf("%d ", array[i]);
    }

    return 0;
}
