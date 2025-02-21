#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define n 10
char stack[];
int top = -1;
void push(int paran) {
    if (top == n-1) printf("Stack is full");
    else {
        top++;
        stack[top] = paran;
    }
}

void pop() {
    if(top == -1) printf("Stack is already empty");
    else top--;
}

int main(){
    char exp[10];
    printf("Input the exp : ");
    scanf("%[^\n]s",exp);
    for (int i = 0; i <= strlen(exp); i++) {
        // First if for opening brackets
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') push(exp[i]);
        // Second condition of for closing brackets.
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if (exp[i] == ')') {
                if (stack[top] == '(') pop();
            } 
            else {
                printf("Unbalanced");
                exit(1);
            }
            if(exp[i] == '}') {
                if (stack[top] == '{') pop();
            }
            else {
                printf("Unbalanced");
                exit(1);
            }
            if(exp[i] == ']') {
                if (stack[top] == '[') pop();
            }
            else {
                printf("Unbalanced");
                exit(1);
            }
        }
        if (top == -1) printf("Balanced");
        else printf("Unbalanced");
    }
    return 0;
}