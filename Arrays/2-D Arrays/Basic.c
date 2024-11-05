#include<stdio.h>

int main(){
    int m[3][3];
    printf("Enter the elements :");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
        }
        
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}