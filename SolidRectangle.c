#include<stdio.h>
void sum(float* x, float* y, float* res) {
    *res = *x + *y;
}
int main(){
    float x, y, res;
    scanf("%f %f", &x, &y);
    sum(&x,&y,&res);
    printf("Sum = %.2f",res);
    return 0;
}