// WAP to find area and perimeter of a circle

#include<stdio.h>
float area(float r){
    float pi = 3.14, a;
    a = pi * r * r;
    return a;
}
float perimeter(float r){
    float pi = 3.14, p;
    p = 2 * pi * r;
    return p;
}

int main(){
    float a, p, r;
    printf("Enter the radius :");
    scanf("%f",&r);
    a = area(r);
    p = perimeter(r);
    printf("Area of the circle is = %.2f\n",a);
    printf("Perimeter of the circle is = %.2f",p);
    return 0;
}