// Wihtout using another array reverse the array. Make an arr[] and reverse it.

#include<stdio.h>
void reverse(int arr[]) {
    int i = 0, j = 6, temp;
    while (i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
        if(i==j) printf("It is a Palindrome number!");
        else printf("It is not a Palindrome number!");
    }
    return;
    
}

int main(){
    // int n; printf("Enter the size of the array :"); scanf("%d", &n);
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    // for(int i = 0; i < n; i++){
        // printf("Enter the element no. %d :", i+1);
        // scanf("%d", &n);
    // }
    reverse(arr);
    for(int i = 0; i <= 7-1; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}