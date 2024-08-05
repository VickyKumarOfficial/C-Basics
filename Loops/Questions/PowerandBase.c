// Q. Two numbers are entered through the keyboard. WAP to find value of one number raised to the power of another.

// #include<stdio.h>

// int main(){
//     int a,b;
//     printf("Enter base :");
//     scanf("%d",&a);
//     printf("Enter power :");
//     scanf("%d",&b);
//     int power = 1;
//     for (int i = 1; i <= b; i++){
//         power = power * a;
//         // printf("%d raised to power %d is :%d\n",a,i,power); // This statement is to print every single power
//         // Flaw -> it can't give output as 1 if we give n^0 where n can be any number. It will simply end the code.
//     }
//     printf("The power %d of the given base %d is :%d",b,a,power);
//     return 0;
// }

// Above code's flaw resolved down.

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter base :");
    scanf("%d",&a);
    printf("Enter power :");
    scanf("%d",&b);
    int power = 1;
    
    if (a == 0 && b == 0)
        printf("%d raised to the power %d is : Undefined",a,b,power);    
    
    else if (b < 0){
        printf("%d raised to the power %d is :%.3f",a,b,(-1)/power);
    }
    
        else{
            for (int i = 1; i <= b; i++){
            power = power * a;
            printf("%d raised to power %d is :%d\n",a,i,power); // If want to printf every step then print statement under loop.
        }
        // printf("The power %d of the given base %d is :%d",b,a,power); // To only get the answer.
    }
    return 0;
}