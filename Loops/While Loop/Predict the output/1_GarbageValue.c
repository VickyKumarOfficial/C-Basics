// Don't run unless and until you have final answer.
#include<stdio.h>

int main(){
    int k;
    printf("%d",k); // coz of this printf satement you are forcing it to run so it will give any random value known as 'garbage value'. 
    while (k<=100)
    {
        printf("%d",k);
        k = k + 2;
    }
    
    return 0;
}