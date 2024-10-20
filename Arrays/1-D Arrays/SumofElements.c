// WAP to find the sum of all the elements in the array.

#include<stdio.h>
int main(){
    int a[5] = {1, 2, 4, 5, 6}, s = 0;
    for (int i = 0; i < 5; i++) s = s + a[i];
    printf("The sum = %d",s);
    
    return 0;
}  