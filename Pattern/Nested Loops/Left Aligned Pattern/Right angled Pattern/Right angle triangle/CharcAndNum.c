/* 
Display the pattern

1
A B
1 2 3
A B C D
1 2 3 4 5

*/

#include<stdio.h>

int main(){
    int n = 5;
    for (int i = 1; i <= n; i++) {
        if (i%2 == 0) {
            for (int j = 1; j <= i; j++) printf("%c ",j+64);
        } else {
            for (int j = 1; j <= i; j++) printf("%d ",j);
        }
        printf("\n");
    }
    return 0; 
}