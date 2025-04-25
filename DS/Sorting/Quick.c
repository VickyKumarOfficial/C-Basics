#include <stdio.h>

int partition(int a[], int low, int high) {
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    while (1) {
        while (i <= high && a[i] < pivot)
            i++;

        while (a[j] > pivot)
            j--;

        if (i < j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        } else 
            break;
    }

    int temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}

void quick_sort(int a[], int low, int high) {
    if (low < high) {
        int j = partition(a, low, high);
        quick_sort(a, low, j - 1);
        quick_sort(a, j + 1, high);
    }
}

int main() {
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("Enter values of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    quick_sort(a, 0, n - 1);
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}