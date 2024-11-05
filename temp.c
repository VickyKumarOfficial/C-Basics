// Binary search in Recursion

// #include<stdio.h>

// int binary_search(int arr[], int s, int e, int key) {

//     if (s > e) return -1;

//     int mid = (s+e)/2;

//     if (arr[mid] == key) return mid;
//     else if (arr[mid] > key) binary_search(arr, s, mid-1, key);
//     else binary_search(arr, mid+1, e, key);

// }

// int main(){
//     int n; scanf("%d", &n);
//     int key; scanf("%d", &key);
//     int arr[n];
//     for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

//     int ind = binary_search(arr, 0, n-1, key);

//     if (ind != -1) printf("%d Found at %d", key, ind);
//     else printf("Not Found");

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