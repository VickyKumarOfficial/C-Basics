#include<stdio.h>

int main(){
    int r, c;
    printf("Enter rows :");
    scanf("%d", &r);
    printf("Enter columns :");
    scanf("%d", &c);
    int a[r][c];
    printf("Enter elements :\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);
    }
    printf("\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) printf("%3d",a[j][i]);
        printf("\n");
    }
    
    return 0;
}