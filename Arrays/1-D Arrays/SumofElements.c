// WAP to find the sum of all the elements in the array.

// #include<stdio.h>
// int main(){
//     int a[5] = {1, 2, 4, 5, 6}, s = 0;
//     for (int i = 0; i < 5; i++) s = s + a[i];
//     printf("The sum = %d",s);
    
//     return 0;
// }  

// Find the sum after creating an array by taking input:

// #include<stdio.h>
// void sum(int n, int arr[n]){
//     int s = 0;
//     for (int i = 0; i < n; i++) s = s + arr[i];
//     printf("The sum of the elements of the array = %d",s);
//     return sum;
// }
// int main(){
//     int n;
//     printf("Enter the size of the array :");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the elements :\n");
//     for (int i = 1; i <= n-1; i++) {
//         printf("Enter the element %d :",i);
//         scanf("%d ",&arr[i]);
//         printf("\n");
//     }
//     sum(n,arr[n]);
    
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements,\n");
    for (int i = 0; i < n; i++) {
        printf("Enter the element %d :",i+1);
        scanf("%d",&arr[i]);
        printf("\n");
    }
    int s = 0;
    for (int i = 0; i < n; i++) s = s + arr[i];
    printf("The sum of the elements of the array = %d",s);

    return 0;
}