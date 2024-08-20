// #include<stdio.h>

// int main(){
//     char T;
//     printf("Enter type of plan you are having :");
//     scanf(" %c",&T);
//     char S, P, R;
//     if (T == S){
//         int d;
//         printf("Enter the amount of data :");
//         scanf("%d",&d);
//         if (d*10){
//             printf("Amount of data used = %d and charge for data is = %d",d,d*10);
//         }
//         int c;
//         printf("Number of calls taken :");
//         scanf("%d",&c);
//         if (50)
//         {
//             /* code */
//         }
        
        
//     }
    
//     return 0;
// }

/* Q1) Write a C program to calculate the telephone bill with the help of 
above table. */
#include <stdio.h>

int main(void) {
 char type;
 float x, y, r, d, cost;
 int internet, calls;
 printf("ENTER TYPE INTERNET CALLS : \n");
 scanf("%c %d %d", &type, &internet, &calls);
 if (internet%1 == 0) {
     x = internet ;
 }
 else {
     x = internet + 1 ;
 }
 if (calls%50 == 0) {
     y = (float) calls/50 ;
 }
 else {
     y = (float) calls/50 + 1;
 }
 if (type == 's' || type == 'S') {
     x = x*10 ;
     y = y*75 ;
     r = 800 ;
     d = (x + y) / 2 ;
     cost = d + r ;
     printf("%.2f", cost);
 }
 else if (type == 'p' || type == 'P') {
     x = x*15 ;
     y = y*100 ;
     r = 400 ;
     d = (x + y) * 0.3 ;
     cost = d + r ;
     printf("%.2f", cost); 
 }
 else if (type == 'r' || type == 'R') {
     x = x*25 ;
     y = y*200 ;
     r = 0 ;
     d = (x + y) * 0.2 ;
     cost = d + r ;
     printf("%.2f", cost); 
 }
 else {
     printf("INVALID INPUT");
 }

}

// Q2.  Write a C program to help Rajesh to buy a laptop with the help of following input.( inputs are brand and gaming laptop i.e(graphic card, y if yes n for no).
// D= dell
// H= Hp
// L= Lenovo
#include<stdio.h>

int main()
{
  char br,gr;
  printf("Enter your laptop brand as D=dell, H=hp, L=lenovo :");
  scanf(" %c",&br);
  if(br=='D')
  {
    printf("is your laptop consists graphics or not y for yes and n for no :");
    scanf(" %c",&gr);
    if(gr=='y')
    {
      printf("buy the laptop");
    }
    else
    {
      printf("do not buy this laptop");
    }
  }
  if(br=='H')
  {
    printf("is your laptop consists graphics or not y for yes and n for no :");
    scanf(" %c",&gr);
    if(gr=='y')
    {
      printf("buy the laptop");
    }
    else
    {
      printf("do not buy this laptop");
    }
  }
  if(br=='L')
  {
    printf("is your laptop consists graphics or not y for yes and n for no :");
    scanf(" %c",&gr);
    if(gr=='y')
    {
      printf("buy the laptop");
    }
    else
    {
      printf("do not buy this laptop");
    }
  }
  
}

/* Q3) Write a C program to find whether the given 2 digit number is handsome 
number or not.(a number is said to be handsome if sum of digits >= product 
of digits). */
#include <stdio.h>

int main(void) {
    int two_digit_number;
    printf("ENTER TWO DIGIT NUMBER : ");
    scanf("%d", &two_digit_number);
    int first_digit = two_digit_number%10;
    int second_digit = (two_digit_number - first_digit) / 10 ;
    int sum_of_digits = first_digit+second_digit ;
    int product_of_digits = first_digit*second_digit ;
    if (sum_of_digits>=product_of_digits) {
        printf("\nHANDSOME NUMBER");
    }
    else {
        printf("\nNOT HANDSOME NUMBER");
    }
}

/* Q4) Write a C program to find whether to buy circular dining table or 
rectangular dining table based on area of the dining table. 
(inputs = radius, length, breadth.) */
#include <stdio.h>

int main(void) {
    int l, b, r;
    float pi = 3.14 ;
    printf("ENTER VALUES OF LENGTH BREADTH RADIUS : ");
    scanf("%d %d %d", &l, &b, &r);
    int area_of_rectangle = l * b ;
    float area_of_circle = pi*r*r ;
    if (area_of_circle>area_of_rectangle) {
        printf("\nBUY CIRCULAR DINING TABLE");
    }
    else {
        printf("\nBUY RECTANGULAR DINING TABLE");
    }
}

/* Q5) Write a C program to find whether person A is stronger than person B 
or not. (his weight and how much he can lift weights). */
#include <stdio.h>

int main(void) {
    int wa, wla, wb, wlb;
    printf("ENTER WEIGHT OF A, WEIGHT LIFT BY A, WEIGHT OF B, WEIGHT LIFT BY B : ");
    scanf("%d, %d, %d, %d", &wa, &wla, &wb, &wlb);
    float ratio_of_a = (float) wla / wa ;
    float ratio_of_b = (float) wlb / wb ;
    if (ratio_of_a>ratio_of_b) {
        printf("\nA IS STRONGER");
    }
    else if (ratio_of_b>ratio_of_a) {
        printf("\nB IS STRONGER");
    }
    else {
        printf("\nEQUAL");
    }
}

/* Q6)Write a C program to calculate BMI(body mass index), for the given 
height and weight and also test whether the person is under weight, 
normal weight, over weight, or obesity. */
#include <stdio.h>

int main(void) {
    int weight;
    float height;
    printf("Enter Your Weight and height : ");
    scanf("%d %d", &weight, &height);
    float b = (float) weight / height * height;
    if (b < 18.5) {
        printf("\nUnderweight");
    }
    else if (b <= 24.9) {
        printf("\nNormal Weight");
    }
    else if (b <= 29.9) {
        printf("\nOverweight");
    }
    else {
        printf("\nObese");
    }
}

/* Q7) Write a C program to find whether the given 2 digit number is 
zig zig, /zig zag, /zag zig, (if both the digits are same then print zig zig) 
, (if the 1st digit is less then 2nd digit then print zig zag)  
(if the 1st digit greater than 2nd digit print zag zig). */
#include <stdio.h>

int main(void) {
    int two_digit_number;
    printf("Enter the 2 digit number : ");
    scanf("%d", &two_digit_number);
    int second_digit = two_digit_number%10 ;
    int first_digit = (two_digit_number - second_digit) / 10 ;
    if (two_digit_number < 10) {
        printf("\nZag-Zag");
    }
    else if (first_digit == second_digit) {
        printf("\nZig-Zig");
    }
    else if (first_digit < second_digit) {
        printf("\nZig-Zag");
    }
    else if (first_digit > second_digit) {
        printf("\nZag-Zig");
    }
    
}

/* Q8) Write a C program to find whether the movie is super hit or hit or 
average or flop or disaster, based on the box office collection and budget.   
If the collection is double the budget print super hit ,  if the collection 
is 1.5 times the budget print hit , if the collection is >= 90% of budget 
print average , if the  collection is 75% to 90% print flop,  if  the collection 
is <75% print disaster. */
#include <stdio.h>

int main(void) {
    int boc, b;
    printf("Enter box office collection and budget : \n");
    scanf("%d %d", &boc, &b);
    float c = (float) 1.5*b;
    float d = (float) boc / b * 100 ;
    if (boc == c) {
        printf("HIT");
    }
    else if (d >= 90) {
        printf("AVERAGE");
    }
    else if (d >= 75) {
        printf("FLOP");
    }
    else {
        printf("DISASTER");
    }

}
