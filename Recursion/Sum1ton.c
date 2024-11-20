#include<stdio.h>
void Sum(int x,int n) {
    if(x==0) {
        printf("Sum = %d",n);
        return;
    }
    Sum(x-1,n+x);
    return;
}

int main(){
    int n; printf("Enter the number :"); scanf("%d", &n);
    Sum(n,0);
    return 0;
}

// By Return type

#include<stdio.h>
int sum(int n) {
    if (n == 0) return 0;
    return n+sum(n-1);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Sum = %d",sum(n));
    return 0;
}