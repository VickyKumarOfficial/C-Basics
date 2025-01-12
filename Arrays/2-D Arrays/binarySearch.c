#include<stdio.h>

int binary_search(int arr[], int n, int key) {
    int s = 0, e = n-1;
    int mid = (s+e)/2;

    while (s <= e) {
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) s = mid+1;
        else e = mid-1;
        mid = (e+s)/2;
    }

    return -1;

}

int main(){
    int n; scanf("%d", &n);
    int key; scanf("%d", &key);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int ind = binary_search(arr, n, key);

    if (ind != -1) printf("%d Found at %d", key, ind);
    else printf("Not Found");

}