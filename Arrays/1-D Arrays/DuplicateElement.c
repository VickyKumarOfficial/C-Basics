#include<stdio.h>

int main(){
    int n; printf("Enter the array size = "); scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the element no. %d = ",i+1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("Duplicate element is %d at the index of %d.",arr[i],i);
                break;
            }
        }
    }
    
    return 0;
}