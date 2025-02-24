// Code for bubble sort.

#include<stdio.h>

void bubble_sort(int a[], int n) {
    // int temp;
    for (int i = 1; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if(a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    printf("Enter the size fo array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in the array:\n");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    bubble_sort(a, n);
    printf("Your sorted array is : ");
    for (int i = 0; i < n; i++) printf("%3d", a[i]);
    return 0;
}