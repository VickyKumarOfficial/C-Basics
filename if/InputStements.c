//Input any number and tell whether it is odd or even. 

#include <stdio.h>

int main(){
    int x;
    printf("Enter any number : ");
    scanf("%d",&x);

    if (x % 2 == 0) //dont use ";" which terminate the if statement which stops running the else statement and face the error in code.
    {
        printf("The given number is even");
    }
    
    else
    {
        printf("It is an odd number");
    }

    return 0;
}