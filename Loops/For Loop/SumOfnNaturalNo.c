// WAP to calculate sum of first n number of natural numbers.

#include<stdio.h>

int main(){
    int n, s=0, i;
    printf("Enter nth number :");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
        s+=i;
            printf("sum = %d",s);
    
    return 0;
}