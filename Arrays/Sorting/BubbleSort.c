#include<stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int isSwapDone = 0;
        for (int j = 0; j < n-(i+1); j++) {
            if (arr[j] > arr[j+1]) {
                isSwapDone = 1;
                // swap(&arr[j], &arr[j+1]);
                int  temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if (isSwapDone == 0) break;
    }
}

int main() {
    
    int n; scanf("%d", &n);
    int arr[n]; 
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    sort(arr, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (arr[j] > arr[j+1]) {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}
