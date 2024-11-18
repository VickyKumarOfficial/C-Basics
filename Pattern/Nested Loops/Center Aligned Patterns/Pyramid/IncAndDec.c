/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

*/


#include<stdio.h>

int main(){
    int n = 4;
    for (int i=1;i<=n;i++) {
        for(int l=1;l<=n-i;l++) printf(" ");
        for(int j=1;j<=i;j++) printf("%c",j+64);
        for(int k=i-1;k>=1;k--) printf("%d",k+64);
        printf("\n");
    }
    return 0;
}
