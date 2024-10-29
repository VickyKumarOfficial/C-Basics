// Find the 2nd largest number/element from the array.

#include<stdio.h>
int main(){
    int n; printf("Size of the array :"); scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the element %d in the array :", i+1);
        scanf("%d", &a[n]);
    } int max = a[0];
    for (int i = 0; i < n; i++) {
        if(a[0]>a[i]) {
            max = a[0];
            printf("The largest number is = %d", max);
            if(max>a[i]){
                max = a[0];
                printf("The 2nd largest number is = %d", max);
            }
        }
    
    }
    return 0;
}