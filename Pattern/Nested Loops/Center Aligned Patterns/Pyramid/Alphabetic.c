/*
      A
    A B A
  A B C B A
A B C D C B A

*/

#include<stdio.h>

int main(){
    int n; printf("ENter a number :"); scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i; j++) printf(" ");
        for (int k = 1; k <= i; k++) printf("%c",k+64);
        for (int l = i-1; l >= 1; l--) printf("%c",l+64);
        printf("\n");
    }
    return 0;
}