#include<stdio.h>

int fact(int n);

int main(){
    int n = 7;
    int r = 4;

    int result = fact(n) / (fact(r) * fact(n-r));
    //  result =   7!   /   r!     *   (n-r)!
    printf("%dC%d = %d", n, r, result);

    return 0;
}

int fact(n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}