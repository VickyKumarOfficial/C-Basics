// WAP to find the maximum value among all the elements in the array.

#include<stdio.h>

int main(){
    int m = -1, arr[10] = {2, 6, 12 ,75, 32, 62, 658, 323, 69, 94};
    for (int i = 0; i < 10; i++){
        if(m < arr[i]){
            m = arr[i];
        }
    }
    printf("The greatest number is = %d", m);
    
    return 0;
}