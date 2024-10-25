// Calculate the sum and difference of the even and odd indexes elements respectively in an array.

#include<stdio.h>

int main(){
    int even_sum = 0, odd_sum = 0;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++) {
        if (i%2 == 0) even_sum += arr[i]; // Similarly if even/odd elements were asked rather
                                         //  rather than even/odd indexes then if (arr[i]%2==0) will be checled. 
        else odd_sum += arr[i];
    }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ",arr)
    // }
    printf("Sum of even = %d\n",even_sum);
    printf("Sum of odd = %d",odd_sum);

    return 0;
}