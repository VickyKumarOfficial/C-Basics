#include<stdio.h>

int main(){
    int r1, c1;
    printf("Enter the no. of rows of 1st matrix:");
    scanf("%d", &r1);
    printf("Enter the no. of columns of 1st matrix:");
    scanf("%d", &c1);
    int m1[r1][c1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &m1[i][j]);
        }
        
    }
    int r2, c2;
    printf("Enter the no. of rows of 2nd matrix:");
    scanf("%d", &r2);
    printf("Enter the no. of columns of 2nd matrix:");
    scanf("%d", &c2);
    int m2[r2][c2];
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &m2[i][j]);
        }
        
    }
    if(r1 == r2 && c1 == c2){
        int sm[r1][c1];
        printf("After addition of 2 matices = \n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                sm[i][j] = m1[i][j] + m2[i][j];     // Just change the sign in - or + whatever operation is required.
            }
        }
        
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                printf("%d ", sm[i][j]);
            }
            printf("\n");
        }
    }
    else printf("Invalid Input!");
    
    
    return 0;
}