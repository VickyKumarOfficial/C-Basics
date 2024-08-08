// Q. Shiva wants to buy 1 vegetable among 2 vegetables which is cheap (cost is less). WAP to find minimum of two given numbers.

// #include<stdio.h>

// int main(){
//     int v1, v2;
//     printf("Enter the cost of Ladyfinger :");
//     scanf("%d",&v1);
//     printf("Enter the cost of Brinjal :");
//     scanf("%d",&v2);
//     if (v1 < v2) printf("Shiva will buy Ladyfinger whose cost is :%d",v1); // if you are using any scanf or printf whatever you can use if statement without brackets only
//                                                                           // if using multiple(more than one) than brackets are mendatory.
//     else printf("Shiva will buy Brinjal whose cost is :%d",v2);  
//     return 0;
// }

// Q. WAP to find whether the given the number ends with zero or not. If it ends display Yes otherwise NO.

// #include<stdio.h>

// int main(){
//     int n1;
//     printf("Enter 1st number :");
//     scanf("%d",&n1);
//     if (n1%10 == 0) printf("Yes");
//     else printf("No");
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     if (n % 2 == 0)
//         printf("It is an even number");
//     else printf("It is an odd number");
    
//     return 0;
// }

// Q. WAP to find the square of a number if it is negative and if +ve then find cube.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if (n < 0) {
        n = n * n;
        printf("The number is -ve and square of it is :%d",n);
    }
    else if (n > 0) {
        n = n * n * n;
        printf("The number is +ve and cube of this is :%d",n);
    }
    
    return 0;
}