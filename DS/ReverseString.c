#include <stdio.h>
#include <stdlib.h>
#define n 10001

char s[n];
int top = -1;

void push(int x) {
    if (top == n - 1) {
        printf("\nToo many characters\n");
    } else { 
        s[++top] = x;
    }
}
char pop() {
    if (top == -1) {
        printf("\nStack is empty\n");
        return '0';
    } else {
        int x = s[top--];
        return x;
    }
}
int main () {
    char a[n];
    scanf("%[^\n]s", a);
    for (int i = 0; a[i] != '\0'; i++) push(a[i]);
    for (int i = 0; a[i] != '\0'; i++) a[i] = pop();
    printf("%s", a);    
}