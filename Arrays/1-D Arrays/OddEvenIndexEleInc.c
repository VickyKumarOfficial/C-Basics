// Given an array of integers, change the value of all odd indexed elements to it's 2nd multiple and increament all even indexed value by 10.

#include<stdio.h>

int main(){
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i <= 7-1; i++) { 
       if(i % 2 != 0) {
        arr[i] *= 2;
        printf("%d ",arr[i]);
       }
       // Similarly if even/odd elements were asked rather
       //  rather than even/odd indexes then if (arr[i]%2==0) will be checled.
       else { 
        arr[i] += 10;
        printf("%d ",arr[i]);
       }
    }
    
    return 0;
}