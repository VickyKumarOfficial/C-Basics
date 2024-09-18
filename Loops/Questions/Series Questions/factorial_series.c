#include<stdio.h>
#include<math.h>

int fact(int n) {
    int p = 1;
    for (int i = 1; i <= n; i++) p *= i;
    return p;
}

int main(){
    int x, n;
    printf("Enter numbers: ");
    scanf("%d %d", &x, &n);
    float ans = 1, even = 2;
    printf("1 ");
    for (int i = 2; i <= n; i++) {
        printf("+ %d^%d/%d! ", x, (i-1), 2*(i-1));
        ans += pow(x, i-1) / fact(2*(i-1));
    }
    printf("\nSum: %.2f", ans);
    return 0;
}