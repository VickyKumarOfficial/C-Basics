/*
        b
      b * b 
    b * * * b
  b * * * * * b
  
*/

#include<stdio.h>

int main(){
    int n = 4;
    for (int i=1;i<=n;i++) {
        for(int l=1;l<=n-i;l++) printf(" ");
        for(int j=1;j<=i;j++) {
          if (j==1) printf("b");
          else printf("*"); 
        }
        for(int k=i-1;k>=1;k--) {
          if (k==1) printf("b");
          else printf("*");
        }
        printf("\n");
    }
    return 0;
}