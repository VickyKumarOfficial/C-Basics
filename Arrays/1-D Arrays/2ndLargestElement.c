// Find the 2nd largest number/element from the array.

#include<stdio.h>
#include<limits.h>
int main(){
    // int n; printf("Size of the array :"); scanf("%d", &n);
    // int a[n];
    // for (int i = 0; i < n; i++) {
    //     printf("Enter element no. %d of the array :",i+1);
    //     scanf("%d", &a[i]);
    // }
    int a[6] = {1, 2, 3, 4, 5, 6};
    int max = INT_MIN, smax = INT_MIN;
    for (int i = 0; i < 6; i++) {
        if (max < a[i]) max = a[i];
    }
    printf("The largest element = %d\n",max);
    for (int i = 0; i < 6; i++) {
        if (smax < a[i] && a[i] != max) smax = a[i];
    }
    printf("Second largest number = %d",smax);
    
    return 0;
}