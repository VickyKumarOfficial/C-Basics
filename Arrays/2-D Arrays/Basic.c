#include<stdio.h>
int main(){
    int m,n;
    printf("Enter number of rows and columns :");
    scanf("%d %d",&m,&n);
    float a[m][n];
    printf("Enter marks for %d students and %d subjects :",m,n);
    for(int i = 0; i <= n-1; i++){
        for(int j = 1; j <= n-1; j++){
            scanf("%f",&a[i][j]);
        }
    }
    printf("Matrix in Regular form\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%.2f  ",a[i][j]);
        }
        printf("\n");
    }
    printf("");
    return 0;
}