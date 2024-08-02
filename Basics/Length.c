// #include<stdio.h>

// int main(){
//     int length, breadth;
//     length = 10;
//     breadth = 15;
//     int Area = 150;
//     Area = length*breadth;
//     printf("Area is %d by multiplying %d x %d\n", Area, length, breadth);
//     int Perimeter = 50;
//     Perimeter =  2*(length+breadth);
//     printf("Perimeter is %d by applying 2*(%d+%d)",Perimeter, length, breadth);
//     return 0;
// } 


#include <stdio.h>

int main() {
    int a = 5;
    int b = 6;
    
    int result = (a * a) + (b * b) + 2*(a * b);
    printf("(%d + %d)^2 is %d\n",a,b,result);
    
    result = (a * a * a) + (b * b * b) + 3*(a * a * b) + 3*(a * b * b);
    printf("(%d + %d)^3 is %d\n",a,b,result);
    
    return 0;
}
