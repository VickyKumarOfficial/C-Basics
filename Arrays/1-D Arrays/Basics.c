// Array is the collection of data stored in a variable. Used to store multiple data in a single variable.
/*
SYNTAX:
We make a variable like: [a]  and store number of terms in it like [a] contains values - 10, 20, 30, 40...etc in {}
written as -> [a] = {10, 20, 30, 40};
here a[0] - 10, a[1] - 20, a[2] - 30 and so on... a[n] where n refers to the index which we are reffering to.
*/

#include<stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Value of 2nd index = %d\n",arr[2]);    // while printing arr[2] here 2 in the [] means it is indexing 2nd value which is 3.
    
    // For value Updation
    // Earleir our data is -> arr[5] = {1, 2, 3, 4, 5}
    arr[4] = 100;   // Here I am changing the 4th index of data in array
    // Now the data is -> arr[5] = 1, 2, 3, 4, 100. where 100 will be printed for arr[4] 
    printf("4th value after updation = %d ",arr[5]);

    // For float value:
    float a[5] = {1.12, 2.425, 6.251, 6.14, 8.736};
    printf("\nFloat value = %.2f ",a[4]);

    // For character values:
    char crr[5] = {'a', '^', 's', '%', '\0'};   // Tip - ***'\0' is null character***
    printf("\nCharacter value is = %c",crr[4]);
    return 0;
}