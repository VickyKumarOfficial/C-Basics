// Pass linear search program in functions.

#include<stdio.h>
void array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter the element no. %d :", i+1);
        scanf("%d", &a[i]);
        printf("\n");
    }
    
}

void out_array(int a[], int n) {
    printf("Array is = ");
    for (int i = 0; i < n; i++) {
        printf("%d ",a[i]);
    }
}

int search(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (x == a[i]) return i;
    }

    return -1;
}

int main(){
    int n, r, x;
    printf("What should be the size of the array? :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in the array :\n");
    array(arr, n);
    out_array(arr, n);
    printf("Enter the data for search :");
    
    int l = search(arr, n, x);

    if (l == -1) printf("ERROR! Data not found.");
    else printf("Data found \2");

    return 0;
}