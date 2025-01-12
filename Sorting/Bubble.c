#include<stdio.h>

void bubble(int a, int n) {
    
}

int main(){
    int n;
    printf("Enter the size fo array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in the array:\n");
    for (int i = 0; i < n; i++) scsanf("%d", &a[i]);
    bubble(a, n);
    printf("Your sorted array is : ");
    for (int i = 0; i < n; i++) printf("%3d", a[i]);
    return 0;
}