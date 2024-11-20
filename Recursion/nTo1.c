#include<stdio.h>
void print(int x) {
    if (x==0) return;
    printf("Hello\n");
    print(x-1);
    return;
}
int main(){
    int n; printf("Enter a number : "); scanf("%d", &n);
    print(n);
    return 0;
}