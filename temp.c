#include<stdio.h>

int main(){
    int n = 4;
    int a = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            printf("%c ",a+64);
        }
        a--;
        printf("\n");
    }
    
    return 0;
}