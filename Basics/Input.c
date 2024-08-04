#include<stdio.h>

int main(){
    float Pi, r, h, V;
     printf("Enter the radius of the cone :");
     scanf("%f",&r);
     printf("Enter the height of the cone :");
     scanf("%f",&h);
     Pi = 3.14;
     V = 0.33*Pi*(r*r*h);
     printf("The Volume of the cone is :%f",V);
    return 0;
}