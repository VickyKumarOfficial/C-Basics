// Q. Print the patter in numbers of difference of 2

// 1
// 1 3
// 1 3 5
// 1 3 5 7

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    for (int i = 1; i <= n; i=i+1){
        
        for(int j = 1; j <= 2*i-1; j+=2){
            printf("%d ",j);
            
        }
        printf("\n");
    }
    
    return 0;
}