#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for (int i = 2; i <= x; i++) {
        fact *= i;
    }
    return fact;
}
int combination(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    for(int i = 0; i <= n; i++){
        for (int j = 0; j <= 1; j++){
            int icj = combination(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }
    return 0;
}