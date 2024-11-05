#include<stdio.h>

int main(){
    int n, x, temp;
    printf("Enter the size of array :");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Enter then element no. %d :",i+1);
        scanf("%d", &a[i]);
    }
    printf("Befor sorting the elements :");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; i++) {
            if(a[j] < a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        
    }
    printf("After swapping array is :");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);

    return 0;
}