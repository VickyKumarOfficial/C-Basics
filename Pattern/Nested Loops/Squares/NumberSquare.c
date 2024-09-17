// WAP to display the following paatern.
// iv.  1  2  3  4 
//      5  6  7  8
//      9 10 11 12
//     13 14 15 16

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int x = n*n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++){
            
            printf("%3d ",x); // %3d is used to display the pattern in an structred way.
            x--;
        }
        printf("\n");
    }
    
    return 0;
}