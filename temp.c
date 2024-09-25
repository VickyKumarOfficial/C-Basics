#include<stdio.h>

int main(){
    int a=10, b=20;
    printf("%d %d\n",a, b);
    b = a^b;
    a = a^b;
    b = a^b;
    printf("%d %d\n",a, b);

    return 0;
}