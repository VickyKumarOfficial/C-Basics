#include<stdio.h>
int main(){
    int n; //n times loop chalega
    printf("Enter a number :");
    scanf("%d", &n);
    // As we not using maths so no need to change in for statement anything. So we will make a new variable.
    // New variable me chedkhani karo for statment me and make the loop print.
    int a = 4;
    for (int i=1; i<=n; i++){ // That's why Declaration me n times hi print hoga as n times is the input from the user that how many time it is needed to be printed.
        printf("%d ",a);
        a = a + 3;
    }
    return 0;
}