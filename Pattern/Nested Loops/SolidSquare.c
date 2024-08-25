#include<stdio.h>

int main(){
    int x, y;
    printf("Enter rows and columns :");
    scanf("%d%d",&x,&y);
    if(x==y){
        for (int i = 1; i <= x ; i++){
                for (int i = 1; i <= y; i++){
                printf("*");
                }
            printf("\n");
        }
    }
    else printf("Invalid input! Rows and columns must be equal");
    return 0;
}