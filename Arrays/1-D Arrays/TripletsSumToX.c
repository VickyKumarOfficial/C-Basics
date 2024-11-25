// Same question in this file name - "PairsEqualToX.c" just find triplets in replace of pairs.

#include<stdio.h>
int main(){
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x, totalcount = 0;
    printf("Enter x :");
    scanf("%d",&x);
    for (int i = 0; i <= 7; i++) {
        for (int j = i + 1; j <= 7; j++) {
            for (int k = i + 2; k <= 7; k++){
                if (arr[i] + arr[j] + arr[k]== x){
                    totalcount++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("Total number of ways = %d",totalcount);
    return 0;
}