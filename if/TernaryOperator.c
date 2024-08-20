//  #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d", &n);
//     (n % 2 == 0) ? printf("it is an even number") : printf("it is an odd number");
//     return 0;
// }

// Write a C program to find the difference between using condtional operator.
// #include<stdio.h>

// int main(){
//     int n1,n2;
//     printf("Enter any 2 numbers :");
//     scanf("%d%d",&n1,&n2);
//     (n1 > n2)?printf("The difference is :%d",n1-n2) : printf("The difference is :%d",n2-n1);
//     return 0;
// }

// Write a C program to do multiple actions at a time. Take input of 2 numbers and find the quoteint, remainder, product and sum.
// Write a C program to check whether the person is eligible for discount or not.
// Gender -> F
// if age > 50 then 100% discount, age < 50 then 50% discount
// Gender -> M
// if age >= 65 then 100% discount, age > 50 & <65 then 50% discount, age < 50 then no discount.
// #include<stdio.h>

// int main(){
//     char g, F, M, f, m;
//     int age;
//     printf("Enter Gender (M/F):");
//     scanf(" %c",&g);
//     printf("Enter age :");
//     scanf("%d",&age);
//     (g == F || g == f)?
//     (age>=50, printf("You will get discount of 100%"), 
//     age<50, printf("You will get discount of 50%")):

//     (age>=65, printf("You will get discount of 100"), 
//     age>50, printf("You will get discount of 50%"), 
//     age<50, printf("You will get no discount"));
//     return 0;
// }

// Write a C program to find whether a number is King or Queen or Jack 
// Take input of a 2 digit number and if the any digit in the number is 9 then it is king
// if numebr is having 5 in it then it is queen and if number is not having 9 or 5 both then it is jack.
#include <stdio.h>

int main() {
    int n, d1, d2;

    printf("Enter a two-digit number: ");
    scanf("%d", &n);
    d1 = n / 10;
    d2 = n % 10;
    (d1 == 9 || d2 == 9) ? printf("King\n") : 
    (d1 == 5 || d2 == 5) ? printf("Queen\n") :
    printf("Jack\n");

    return 0;
}
// Write a C program to test whether the given number is mirror number or not (eg: 33, 11, 99, 88...).
#include <stdio.h>

int main() {
    int num, rev;
    printf("Enter a 2-digit integer: ");
    scanf("%d", &num);

    rev = (num % 10) * 10 + (num / 10);

    (num == rev) 
    ? printf("%d is a mirror number.\n", num) 
    
    : printf("%d is not a mirror number.\n", num);

    return 0;
}
