// #include<stdio.h>

// int main(){
//     float Pi, r, h, V;
//      printf("Enter the radius of the cone :");
//      scanf("%f",&r);
//      printf("Enter the height of the cone :");
//      scanf("%f",&h);
//      Pi = 3.14;
//      V = 0.33*Pi*(r*r*h);
//      printf("The Volume of the cone is :%f",V);
//     return 0;
// }

// Q. Find the Volume of a cube for the given side as a input.

// #include<stdio.h>
// int main(){
//     float s;
//     printf("Enter a side for a cube :");
//     scanf("%f",&s);
//     float Volume = s * s * s;
//     printf("The volume of cube for the given side %d is = %.3f",s,Volume);
// }

// Q. WAP to find cost of one apple for the given cost for a dozen of apple as input.

// #include<stdio.h>

// int main(){
//     float a;
//     printf("Enter the cost for a dozen of apples :");
//     scanf("%f",&a);
//     int b = 12;
//     float cost = a/b;
//     printf("The cost of one apple = Rs%.3f",cost);

//     return 0;
// }

// Q. WAP to find Area & Perimeter of a circle for the given radius as input.

// #include<stdio.h>

// int main(){
//     float r, Area, Perimeter, Pi = 3.14;
//     printf("Enter the radius of circle :");
//     scanf("%f",&r);
//     Area = Pi*r*r;
//     printf("The area of circle having radius of %.2f is = %f.3\n",r,Area);
//     Perimeter = 2*Pi*r;
//     printf("The Perimeter of circle having radius of %.2f is = %.3f",r,Perimeter);
//     return 0;
// }

// Q. WAP to find Temperature in C for the given temperature F.

// #include<stdio.h>

// int main(){
//     float C, F;
//     printf("Enter the temperature in Farenheit :");
//     scanf("%f",&F);
//     C = ((F-32)/180)*(100);
//     printf("The temperature in C is = %.2f",C);
//     return 0;
// }

// Q. WAP to find Area & Perimeter of a rectangle where legnth and breadth are taken as input and take length as int and breadth as float data type.

// #include<stdio.h>

// int main(){
//     int l;
//     float b;
//     printf("Enter Length of the Rectangle :");
//     scanf("%d",&l);
//     printf("Enter Breadth of the Rectangle :");
//     scanf("%f",&b);
//     float Area = l*b;
//     printf("The area of rectangle is = %.2f\n",Area);
//     float Perimeter = 2*(l+b);
//     printf("The Perimeter of the Rectangle is = %.2f",Perimeter);

//     return 0;
// }

// Q. WAP to calculate total bill amount after ordering X plates of idli, Y plates of Dosa, and Z plates of Vada 
// (Idli cost 40/plate, Dosa is 50/plate and vada is 60/plate).

// #include<stdio.h>

// int main(){
//     int x=40, y=50, z=60;
//     int Idli, Dosa, Vada;
//     printf("Give your order :\nNumber of plates of Idli you want to have :");
//     scanf("%d",&Idli);
//     printf("Number of plates of Dosa you want to have :");
//     scanf("%d",&Dosa);
//     printf("Number of plates of Vada you want to have :");
//     scanf("%d",&Vada);
//     int sum = (x * Idli) + (y * Dosa) + (z * Vada);
//     printf("The total bill amount for your order %d plates of Idli, %d plates of Dosa, %d plates of Vada is =%d",Idli, Dosa, Vada, sum);
//     return 0;
// }

// Q. WAP to calculate total marks from the given five course/subjects marks given as input.

// #include<stdio.h>

// int main(){
//        int a,b,c,d,e;
//        printf("Enter the marks in CTSD   :");
//        scanf("%d",&a); 
//        printf("Enter the marks in Coding :");
//        scanf("%d",&b); 
//        printf("Enter the marks in LSE    :");
//        scanf("%d",&c); 
//        printf("Enter the marks in IoT    :");
//        scanf("%d",&d); 
//        printf("Enter the marks in DTI    :");
//        scanf("%d",&e);
//        int sum = a + b + c + d + e;
//        printf("Total marks is = %d",sum); 
//     return 0;
// }

// Q. WAP to show number of ones, number of tens, number of hundreds for the given three digits number as input.

// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter any 3-digit number: ");
//     scanf("%d", &n);

//     int ones = n % 10;
//     printf("The one's digit is %d\n", ones);

//     n = n / 10;
//     int tens = n % 10;
//     printf("The ten's digit is %d\n", tens);

//     n = n / 10;
//     int hundreds = n % 10;
//     printf("The hundred's digit is %d\n", hundreds);

//     return 0;
// }

// Q. WAP to find 2nd digit from the given four digit number.

// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     n = n/100;
//     n = n % 10;
//     printf("The 2nd number is :%d",n);    
//     return 0;
// }

// Q. WAP to find the sum of 1st and last digit from the given four digit number.

// #include<stdio.h>

// int main(){
//      int n;
//      printf("Enter a number :");
//      scanf("%d",&n);
//      int n1 = n % 10;
//      printf("The last digit is :%d\n",n1);
//      n = n / 1000;
//      int ld = n % 10;
//      printf("1st digit is :%d\n",ld);
//      int sum = n1 + n;
//      printf("Sum = %d",sum);
//     return 0;
// }
// #include<stdio.h>

// int main() {
//     int n, firstDigit, lastDigit, sum;

//     // Prompt the user to enter a number
//     printf("Enter a 4-digit number: ");
//     scanf("%d", &n);

//     // Extract the last digit
//     lastDigit = n % 10;

//     // Extract the first digit by dividing by 1000
//     firstDigit = n / 1000;

//     // Calculate the sum of the first and last digit
//     sum = firstDigit + lastDigit;

//     // Print the results
//     printf("The first digit is: %d\n", firstDigit);
//     printf("The last digit is: %d\n", lastDigit);
//     printf("Sum of the first and last digit is: %d\n", sum);

//     return 0;
// }

// Q. WAP to reverse 2 digit

// #include<stdio.h>

// int main(){
    
//     return 0;
// }

// Q. WAP to find height in cm for the given height in feet and inches as input.

// #include<stdio.h>

// int main(){
//     int f;
//     printf("Enter height in feet :");
//     scanf("%d",&f);
//     float i;
//     printf("Enter height in inches :");
//     scanf("%f",&i);
//     int cm = f * 30;
//     float cm1 = i * 2.5;
//     float sum = cm + cm1;
//     printf("Height is :%.2f",sum);
//     return 0;
// }

// Q. WAP to calculate average marks in CTSD exam for the given theory, practicals, skill exam marks.

// #include<stdio.h>

// int main(){

//     return 0;
// }

// Q. i) WAP to claculate total runs score and number of balls for the given - a. number of sixes. b. number of forse. c. number of threes. d. number of twos. e. number of ones. f. number of dot balls.
// ii) Also find the Strike rate.

// #include<stdio.h>

// int main(){
//     int n1, n2, n3, n4, n5, n6;
//     printf("Enter the runs scored :");
//     scanf("%d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6);
//     int runs = (n1 * 6) + (n2 * 4) + (n3 * 3) + (n4 * 2) + (n5 * 1) + (n6 * 0);
//     printf("Total run scored :%d\n",runs);
//     int balls = n1 + n2 + n3 + n4 + n5 + n6;
//     printf("No. of balls played = %d",balls);
//     return 0;
// }

// Q. WAP to find Boys : Girls ratio in a class for a given number of boys and girls are as input.

// #include<stdio.h>

// int main(){
//     int G, B;
//     printf("Enter number of girls in the class :");
//     scanf("%d",&G);
//     printf("Enter number of boys in the class :");
//     scanf("%d",&B);
//     int Total = G + B;
//     printf("Total number of boys and girls in the class is = %d\n",Total);
//     float gratio = (float)G/Total*100;
//     float bratio = (float)B/Total*100;
//     printf("The ratio of girls and boys are %.2f : %.2f",gratio,bratio);
//     return 0;
// }

// Q. WAP to find/claculate total marks by considering 3 courses where 1st course is given 50% weightage, 2nd course is given 30%, 3rd course 20% of weightage.

// #include<stdio.h>

// int main(){
    
//     return 0;
// }

// Q.