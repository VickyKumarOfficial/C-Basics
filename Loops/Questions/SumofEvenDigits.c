// // Q. WAP to print sum of all the even digits of a given number.


// #include<stdio.h>
// int main(){
//     int number, sum = 0, digit; // number is the input from the user.
//     printf("Enter a number :");
//     scanf("%d",&number);
    
//     while (number != 0)
//     {
//         digit = number % 10; // Get the last digit of your number from remainder.
//         digit = digit * 10 + sum; // Now add that last digit number in the answer (Revno).
//         // By '%' we got 5 not we need to remove that last digit from the number and that new numbe will be taken for further division.
//         number = number / 10; // Here we removed 5 by this '/' operator.
//         if (digit % 2 == 0)
//         {
//             printf("Even number are :%d");
//         }
        

//     printf("Your reversed number is :%d",digit);
    
//     return 0;
// }

#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter a number :");
    scanf("%d",&n);   
    while (n){ if ((n % 10) % 2 == 0) sum += (n % 10);
        n = n/10;}
    printf("Even digit Sum = %d", sum);
    return 0;
}