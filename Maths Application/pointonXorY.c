#include<stdio.h>
int mai(){
    int x, y;
    printf("Enter the Co-ordinates :");
    scanf("%d %d", &x, &y);
    if (x == 0 && y == 0){
        printf("Point lies on origin (0, 0)");
    }
    else if (y == 0){
        printf("Point lies on X-axis");
    }
    else if (x == 0){
        printf("Point lies on Y-axis");
    }
    else {printf("Point does not lies on X or Y axis");}
    return 0;

}