#include<stdio.h>
int febo(int n) {
    if (n == 1 || n == 2) return 1;
    return febo(n-1) + febo(n-2);
}
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("The %dth term is = %d",n,febo(n));
    return 0;
}