// #include<stdio.h>

// // void swap(int* a, int* b) {
// //     int temp = *a;
// //     *a = *b;
// //     *b = temp;
// // }

// void sort(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         int isSwapDone = 0;
//         for (int j = 0; j < n-(i+1); j++) {
//             if (arr[j] > arr[j+1]) {
//                 isSwapDone = 1;
//                 // swap(&arr[j], &arr[j+1]);
//                 int  temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//         if (isSwapDone == 0) break;
//     }
// }

// int main() {
    
//     int n; scanf("%d", &n);
//     int arr[n]; 
//     for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

//     sort(arr, n);

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n-1; j++) {
//             if (arr[j] > arr[j+1]) {
//                 int t = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = t;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++) printf("%d ", arr[i]);

//     return 0;
// }

#include <stdio.h>

int main() {
    int n,i,j,temp;
    printf("enter array size :");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements :");
    for(i=0;i<=n-1;i++) {
     scanf("%d",&a[i]);
   }
   printf("before sorting :");
   for(i=0;i<=n-1;i++) {
       printf("%d ",a[i]);
   }
   for(i=1;i<=n-1;i++) {
       for(j=0;j<n-i;j++) {
           if(a[j]>a[j+1]) {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
           }
       }
   }
    printf("\nafter sorting :");
   for(i=0;i<=n-1;i++) {
       printf("%d ",a[i]);
   }
}