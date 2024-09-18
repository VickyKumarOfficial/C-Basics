// #include<stdio.h>
// #include <math.h>
// int main(){
//     int x1, y1;
//     printf("Enter 1st point :");
//     scanf("%d %d",&x1, &y1);
//     int x2, y2;
//     printf("Enter 2nd point :");
//     scanf("%d %d", &x2,&y2);
//     int m1;
//     m1 = (y2-y1)/(x2-x1);
//     printf("slope m1 is =%d\n", m1);

//     int x3, y3;
//     printf("Enter 3rd point :");
//     scanf("%d %d", &x3,&y3);
//     int m2;
//     m2 = (y3-y2)/(x3-x2);
//     printf("slope m2 is =%d\n", m2);

//     if (m1 == m2){
//         printf("All the given points lies on straight line");
//     }
//     else
//     {
//         printf("Given points does not lie on a straight line");
//     }
    
//     return 0;
// }

#include<stdio.h>
#include<math.h>
int main(){
    int x1, y1, x2, y2, x3, y3, m1, m2;
    printf("Enter 1st point :");
    scanf("%d %d", &x1, &y1);
    printf("Enter 2nd point :");
    scanf("%d %d", &x2, &y2);
    printf("Enter 3rd point :");
    scanf("%d %d", &x3, &y3);
    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);
    printf("m1 = %d\n", m1);
    printf("m2 = %d\n", m2);
    if (m1 == m2){
        printf("points lies on the straight line");
    }
    else{
        printf("Points does not lies on the straight line");
    }

    return 0;
}