// Display the following pattern:
/*
          *
        * *
      * * * 
    * * * *
*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        // For Spaces
        for (int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        // For printing '*'
        for (int k = 1; k <= i; k++){
            printf("* ");
        }
        printf("\n");        
    }
    
    return 0;
}