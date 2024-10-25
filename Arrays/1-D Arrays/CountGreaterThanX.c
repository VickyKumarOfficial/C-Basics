// Count the number of elements in the array which are greater that the number x given by the user.

#include<stdio.h>

int main(){
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    int x, c = 0;
    printf("Enter the value of x :");
    scanf("%d", &x);
    for (int i = 0; i < 7; i++) {
        if (a[i] > x) c++;
    }
    printf("The number of elements greater than %d is = %d", x, c);
    
    return 0;
}