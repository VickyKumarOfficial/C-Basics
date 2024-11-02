// Make an array 'A' and store elements in it and print same elements but in reverse order in array B.

#include<stdio.h>

int main(){
    int n; scanf("%d", &n);
    int a[n];
    int b[n];
    for (int i = 0; i <= n-1; i++) {
        printf("Enter the element no. %d :", i+1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= n-1; i++) {
        b[i] = a[(n-1)-i];
    }
    printf("b[i] = ");
    for (int i = 0; i <= n-1; i++) {
        printf("%d, ", b[i]);
    }
    
    return 0;
}