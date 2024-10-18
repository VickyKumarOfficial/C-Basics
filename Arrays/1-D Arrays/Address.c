// How to print the address of the data stored in the computer?

#include<stdio.h>
int main(){
    for(int i = 0; i <= 3; i++){
    int arr[3]={1, 2, 3};
    printf("%p\n",&arr[i]);
    }
    return 0;
}