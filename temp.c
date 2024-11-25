#include<stdio.h>

int main(){
    int n, x, low = 0, high, mid;
    printf("Enter the size of the array = "); scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the element no. %d = ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Your array is = ");
    for (int i = 0; i < n; i++) printf("%d ",a[i]);
    
    printf("\nEnter the number to be searched in the array = ");
    scanf("%d", &x);
    high = n-1;
    while (low <= high) {
        mid = (low+high)/2;
        if (a[mid] == x) {
            printf("Element found at the index %d",mid);
            return 0;
        }
        else if (a[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    printf("Element not found in the array!");
    
    return 0;
}