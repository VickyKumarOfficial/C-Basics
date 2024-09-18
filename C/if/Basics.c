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

// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     if (n < 0) {
//         n = n * n;
//         printf("The number is -ve and square of it is :%d",n);
//     }
//     else if (n > 0) {
//         n = n * n * n;
//         printf("The number is +ve and cube of this is :%d",n);
//     }
    
//     return 0;
// }

// Q. WAP to test whether the triangle can be formed or not from the 1st side, 2nd side, & 3rd side as the given input.(s1 + s2 >s3)
// sum of 2 sides should be greater than the third side to form a traingle.


// #include<stdio.h>

// int main(){
    
//     return 0;
// }

// Q. WAP to check whether the triangle can be formed by giving three angles as input or not. (Sum of angles = 180)
// Q. WAP to check whether ravi is eligible to vote or not by checking the age(input). (Should be graeter than 18 yrs).
// Q. WAP to test whether 2 given numbers as input ends with same number or not.
// Q. WAP to test whether student is eligible to participate in placement or not(for the given CGPA as input). If CGPA is more than 8.5 you are allowed.

// Today's que
// Q. Write a C Program to find whether the triangle is acute or obtuse or right angle triangle for the given angle as input.
// Q. Write a C Program to find grade of a student for the given marks 
//    marks     |  output grade
// 1. >=90      |       O
// 2. >=80 <90  |       A+
// 3. >=70 <80  |       A
// 4. >=60 <70  |       B
// 5. >=50 <60  |       C
// 6. <50       |       F

// Q. Write a C Program to find nature of the person for the given age.
//    Age         |  Person's nature
// 1. <=3         |  Infant
// 2. >=4 <=12    |  Kid
// 3. >=13 <19    |  Teen age
// 4. >=20 <=35   |  Youth   
// 5. >=36 <=60   |  Middle aged
// 6. >60         |  Senior citizen   

// Q. Write a C program to find whether the climate is very cold or cold or warm or hot or very hot based on the temperature as input.
//    Temperature |  Climate
// 1. <=10        |  very cold
// 2. >10 <=20    |  cold
// 3. >20 <=30    |  warm
// 4. >30 <=40    |  hot
// 5. >40         |  very hot

// Q. Write a C program to calculate income tax for the given salary as input, also calculate salary after income tax.
//    Salary     | Income tax %
// 1. <=20k      | 0.0
// 2. >20k - 30k | 5%
// 3. >30k - 50k | 10%
// 4. >50k - 75k | 15%
// 5. >75k - 1L  | 20%
// 6. >1L        | 30%

// Q. Write a C program to test whether the given number is +ve or -ve or neutral.

// Q. Write a C program to test whether the person is underweight or normal weight or over weight or obese for the given weight & height in kg and m respectively. Calculate BMI using formula (weight / height*height).
//    BMI Range | Status
// 1. <=18.4    | Underweight
// 2. 18.5-24.9 | Normal
// 3. 25.0-39.9 | Overweight
// 4. >=40.0    | Obese

// Q. Write a C program to calculate strikerate and whether the batsman is fastest or medium or slow or very slow run scorer. Number of 
// strikerate
// >200 highest
// 150-200 medium
// 75-150 slow
// <75 very slow

// Q. Write a C program to find whether the college is having good placement record or not.
// 90%-100% Excellent
// 80-90 Good
// 70-80 Average
// <70 worst

// Q. Write a C program to test whether the given two digit numbers is zig zig or zig zag or zag zig.
// If both the digits are same -> zig zig
// If 1st digit less than 2nd digit -> zig zag
// If 2nd digit less than 1st digit -> zag zig
// If only 1 digit number is input -> zag zag

// Q. Write a C program to calculate electricity bill for the given two inputs with the help of following:
// Input-
// 1. numbe of Units consumed
// 2. Type of connection - Domestic or Commercial