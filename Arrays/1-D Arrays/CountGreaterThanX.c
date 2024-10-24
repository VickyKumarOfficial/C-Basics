// Count the number of elements in the array which are greater that the number x given by the user.

#include<stdio.h>

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int x, c = 0;
    scanf("%d", &x);
    for (int i = 0; i < 5; i++) {
        if (a[i] > x) c++;
        
    }
    printf("The number of elements greater than %d is = %d", x, c);
    
    return 0;
}