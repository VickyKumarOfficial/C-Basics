// We make a variable like: [a]  and store number of terms in it like [a] contains values - 10, 20, 30, 40...etc
// written as -> [a] = 10, 20, 30, 40;
// here a[0] - 10, a[1] - 20, a[2] - 30 and so on... a[n] where n refers to the index which we are reffering to.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    float b[n];
    for(int i = 0; i <= n-1; i++){
        scanf("%.2f",&b[i]);
    }
    for(int i = 0; i <= n-1; i++){
        printf("%.2f",b[i]);
    }

    return 0;
}