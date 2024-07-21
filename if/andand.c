#include <stdio.h>

int main(){
    int x;
    printf("Enter any number :");
    scanf("%d",&x);
    
    if (x>99 && x<1000)
        printf("The number is an 3 digit number");
     else printf("The number id not a 3 digit number");
    
    return 0;
}