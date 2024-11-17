/*
* * * * * *
*         *
*         *
* * * * * *
*/

#include<stdio.h>

int main(){
    int r, c;
    printf("Enter a no. of rows = ");
    scanf("%d", &r);
    printf("Enter a no. of columns = ");
    scanf("%d", &c);
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (i == 1 || j == 1 || i == r || j == c) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}