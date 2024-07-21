#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter a number for 1st side :");
    scanf("%d",&a);
    printf("Enter a number for 2nd side :");
    scanf("%d",&b);
    printf("Enter a number for 3rd side :");
    scanf("%d",&c);

    if ((a+b>c) && (b+c>a) && (c+a>b)){
        printf("It's a valid triangle");
    }
    else printf("It's a invalide triangle");
    
    return 0;
}