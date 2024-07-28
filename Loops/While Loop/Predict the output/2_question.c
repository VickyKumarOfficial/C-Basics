#include<stdio.h>
int main(){
    int i = 1;
    printf("Enter a number :");
    scanf("%d",&i);
    while (i<=10);
    {
        printf("\n%d",i);
        i++;
    }
    
    return 0;
}
