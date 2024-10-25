// Find greatest of three numbers using a functions.

#include<stdio.h>
int greatest(int a, int b, int c){
    if(a > c && a > b) return a;
    else if (b>c) return b;
    else return c;
}

int main(){
    int a, b, c;
    printf("Enter the value of a :");
    scanf("%d", &a);
    printf("Enter the value of b :");
    scanf("%d", &b);
    printf("Enter the value of c :");
    scanf("%d", &c);
    int grt = greatest(a, b, c);
    printf("The greates number among them is = %d",grt);
    return 0;
}