// WAP to count no. of letters in a word in given string.

#include<stdio.h>

int main(){
    int a[100], count = 0;
    printf("Enter any sentence :");
    scanf("%[^\n]s",a);
    for (int i = 0; a[i] != '\0'; i++) {
        count++;
    }
    
    return 0;
}