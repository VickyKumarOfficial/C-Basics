#include <stdio.h>

int main() {
    int n, i, max, secondMax, min, secondMin;

    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    // Declare array
    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max, min, secondMax, secondMin
    if(arr[0] > arr[1]) {
        max = arr[0];
        secondMax = arr[1];
        min = arr[1];
        secondMin = arr[0];
    } else {
        max = arr[1];
        secondMax = arr[0];
        min = arr[0];
        secondMin = arr[1];
    }

    // Find second max and second min
    for(i = 2; i < n; i++) {
        if(arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if(arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }

        if(arr[i] < min) {
            secondMin = min;
            min = arr[i];
        } else if(arr[i] < secondMin && arr[i] != min) {
            secondMin = arr[i];
        }
    }

    // Print second maximum and second minimum
    printf("Second Maximum element = %d\n", secondMax);
    printf("Second Minimum element = %d\n", secondMin);

    return 0;
}