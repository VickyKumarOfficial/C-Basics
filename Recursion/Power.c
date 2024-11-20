#include<stdio.h>
int power(int a, int b) {
    if (b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int a, b;
    printf("Enter the Base : ");
    scanf("%d", &a);
    printf("Enter the Power : ");
    scanf("%d", &b);
    printf("%d raised to the power %d is = %d",a,b,power(a,b));
    return 0;
}