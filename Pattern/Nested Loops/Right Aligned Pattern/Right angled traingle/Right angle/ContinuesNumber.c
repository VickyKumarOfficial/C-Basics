// Display the pattern:
/*  
    1
    2 3
    4 5 6
*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int a = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%2d ",a);
            a+=2;
        }
        printf("\n");
    }
    
    return 0;
}