// Take inputs of elements in the array and print the reverse order of that array.

#include<stdio.h>
int main(){
    int i, arr[5];
    for(i = 0; i <= 4; i++){
        printf("Enter the element for the array :");
        scanf("%d",&arr[i]);
        printf("\n");
    }
    printf("\nThe reverse order of the elements in the array are :");
    for(int i = 4; i >= 0; i--){
        printf("%d ",arr[i]);
    }
    return 0;
}