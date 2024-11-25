// Find the total number of pairs in the array whose sum is equal to the given value x.
// for eg. x = 12 and arr = 1, 2,....,10. So, (7, 5) and (4, 8) are the pairs whose gives sum of 12.
// Repeatition is not allowed like (6, 6)/(3, 3) or [(5, 7) (7, 5)] or [(8, 4) (4, 8)].

#include<stdio.h>
int main(){
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x, totalcount = 0;
    printf("Enter x :");
    scanf("%d",&x);
    for (int i = 0; i <= 7; i++) {
        for (int j = i+1; j <= 7; j++) {    
            // here i+1 avoid repeatition. if i starts from 0, then it compares with i+1 which is
            // it's next elemetn not with itself which will be repeated.  
            if (arr[i] + arr[j] == x){
            totalcount++;
            printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
        
        
    }
    printf("Number of pairs are present = %d", totalcount);
    return 0;
}
