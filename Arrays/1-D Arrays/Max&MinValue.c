// WAP to find the Greatest/Max value among all the elements in the array.

#include<stdio.h>

int main(){
    int arr[10] = {-2, -6, -12 ,-75, -32, 62, -658, -323, -69, -94};
    for (int i = 0; i < 10; i++){
        if(arr[0] < arr[i]) arr[0] = arr[i];    // Take a reference of first element of the array
                                                // and check it with all other elements. 
    }
    printf("The greatest number is = %d", arr[0]);
    
    return 0;
}

// To find Smallest/Min value element in the array.


#include<stdio.h>

int main(){
    int arr[10] = {2, 6, 12 ,75, 32, 62, -658, -323, 69, 94};
    for (int i = 0; i < 10; i++){
        if(arr[0] > arr[i]) arr[0] = arr[i];
    }
    printf("The smallest number is = %d", arr[0]);
    
    return 0;
}