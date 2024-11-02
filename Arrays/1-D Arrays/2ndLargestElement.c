// Find the 2nd largest number/element from the array.


#include<stdio.h>
#include<limits.h>
int main(){
    // for taking input of a array
    int n; printf("Size of the array :"); scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element no. %d of the array :",i+1);
        scanf("%d", &a[i]);
    }

    // int a[6] = {1, 2, 3, 4, 5, 6};
    int max = INT_MIN, smax = INT_MIN;
    for (int i = 0; i < 6; i++) {
        if (max < a[i]) max = a[i];
    }
    printf("The largest element = %d\n",max);
    for (int i = 0; i < 6; i++) {
        if (smax < a[i] && a[i] != max) smax = a[i];
    }

    printf("Largest number = %d\n",max);
    printf("Second largest number = %d",smax);
    
    return 0;
    }
    

// More effeceint way. By using only 1 loop.
// But 1 flaw in this that it is not applicable for descending order array elements.




// Done in 1 loop and applicable for ascending & descending both arrays.

#include<stdio.h>
#include<limits.h>
int main(){
    // for taking input of a array
    // int n; printf("Size of the array :"); scanf("%d", &n);
    // int a[n];
    // for (int i = 0; i < n; i++) {
    //     printf("Enter element no. %d of the array :",i+1);
    //     scanf("%d", &a[i]);
    // }

    int a[6] = {6, 5, 4, 4, 2, 1};
    
    int max = INT_MIN, smax = INT_MIN;
    for (int i = 0; i < 6; i++) {
        if (max < a[i]) {
            smax = max;
            max = a[i];
        }
        else if (smax<a[i] && max != a[i]) smax = a[i]; // By adding this line even if repetition of elements
                                        // is there still answer will be correct no matter what the order is.
    }
    printf("Largest number = %d\n",max);
    printf("Second largest number = %d",smax);
    
    return 0;
    }

