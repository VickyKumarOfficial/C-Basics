// WAP to reverse a number which is taken in input.

#include<stdio.h>
int main(){
    int n,Revno = 0,remainder;
    printf("Enter a number :");
    scanf("%d",&n);
    
    while (n != 0)
    {
        remainder = n % 10; // Get the last digit of your number from remainder.
        Revno = Revno * 10 + remainder; // Now add that last digit number in the answer (Revno).
        // By '%' we got 5 not we need to remove that last digit from the number and that new numbe will be taken for further division.
        n = n / 10; // Here we removed 5 by this '/' operator.
    }

    printf("Your reversed number is :%d",Revno);
    
    return 0;
}