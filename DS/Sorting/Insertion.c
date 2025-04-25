#include<stdio.h>

void insertion(int n, int arr[]) {
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;
        while((arr[j] > key) && (j >= 0)) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

}

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements : ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Before sorting : ");
    for(int i = 0; i < n; i++) printf("%3d", arr[i]);
    printf("\nAfter sorting : ");
    insertion(n, arr);
    for(int i = 0; i < n; i++) printf("%3d",arr[i]);
    return 0;
}