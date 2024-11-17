/*
1
2 3
4 5 6
7 8 9 10
*/

#include<stdio.h>

int main(){
    int n; printf("Enter a number :"); scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i%2==0) printf("0");
            else printf("1");
        }
        printf("\n");
    }
    
    return 0;
}