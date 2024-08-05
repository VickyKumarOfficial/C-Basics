#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int digits = 0, sum = 0, rev = 0, ams = 0, m = n, original = n;
    while (n != 0) {
        int rem = n % 10;
        digits++;
        sum = sum + rem;
        rev = (rev*10) + rem;
        n = n / 10;
    }
    while (m != 0) {
        ams += pow(m%10, digits);
        m = m / 10;
    }
    if (original == ams)
    return 0;
}