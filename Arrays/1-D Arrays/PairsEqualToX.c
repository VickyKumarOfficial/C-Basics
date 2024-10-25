// Find the total number of pairs in the array whose sum is equal to the given value x.
// for eg. x = 12 and arr = 1, 2,....,10. So, (7, 5) and (4, 8) are the pairs whose gives sum of 12.
// Repeatition is not allowed like (6, 6) or [(5, 7) and (7, 5)] or [(8, 4) and (4, 8)].

#include<stdio.h>
int main(){
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x, totalcount = 0;
    printf("Enter x :");
    scanf("%d",&x);
    for (int i = 0; i <= 7; i++) {
        for (int j = i + 1; j <= 7; j++) {
            if (arr[i] + arr[j] == x){
            totalcount++;
            printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
        
        
    }
    return 0;
}
