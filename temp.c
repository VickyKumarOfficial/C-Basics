#include <stdio.h>
int ele(int a){
    int first = 0, second = 1, next;
    for (int i = 0; i < a; i++) {
        next = first + second;
        first = second;
        second = next;
        }

    }

int main() {
    int n, first = 0, second = 1, next;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series up to %d terms:\n", n);
    
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        }
        ele(n);
        printf("%d ", next);
    }
    
    return 0;
}