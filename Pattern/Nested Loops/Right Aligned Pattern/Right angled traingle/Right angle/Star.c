/*
Display this pattern:
          *
        * *
      * * *
    * * * *
*/

#include<stdio.h>

int main(){
    int n = 4; 
    // printf("Enter the number :"); scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i; j++) printf("  ");  // two spaces should be printed
        for (int k = 1; k <= i; k++) printf("* ");  // one more space should be given after star
        printf("\n");
    }
    
    return 0;
}