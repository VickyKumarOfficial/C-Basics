// WAP to calculate the product of the elements in the array.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of the array :");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        printf("Enter the elements :");
        scanf("%d", &arr[i]);
    }
    int p = 1;
    for (int i = 0; i < n; i++) p = p * arr[i];
    printf("The product of the array is = %d",p);

    return 0;
}