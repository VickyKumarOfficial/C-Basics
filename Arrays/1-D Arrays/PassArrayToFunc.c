#include<stdio.h>
void fun(int a[]){
    a[0] = 34;
    return;
}

int main(){
    int a[5] = {1, 2, 4, 5, 6};
    printf("%d\n",a[0]);
    fun(a);
    printf("%d",a[0]);
    return 0;
}