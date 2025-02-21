#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20
char stk[MAX];
int top=-1;
void push(char item) {
  if (top == (MAX - 1))
    printf ("Stack is Full\n");
  else {
    top++; // Push the char and increment top
    stk[top] = item;
  }
}
void pop() {
  if (top == - 1) printf ("Stack is Empty\n");
  else top--; // Pop the char and decrement top
}

int main() {
  char exp[MAX];
  printf("\nINPUT THE EXPRESSION : ");
  scanf("%s", exp);
  for(int i = 0; i < strlen(exp); i++) {
    if(exp[i] == '('  exp[i] == '['  exp[i] == '{') {
      push(exp[i]); // Push the open bracket
    }
    else if(exp[i] == ')'  exp[i] == ']'  exp[i] == '}') {
      if(exp[i] == ')') {
        if(stk[top] == '(') pop(); // Pop the stack until closed bracket is found
        else {
          printf("\nUNBALANCED EXPRESSION\n");
          exit(1);
        }
      }
      if(exp[i] == ']') {
        if(stk[top] == '[') pop(); // Pop the stack until closed bracket is found
        else {
          printf("\nUNBALANCED EXPRESSION\n");
          exit(1);
        }
      }
      if(exp[i] == '}') {
        if(stk[top] == '{') pop(); // Pop the stack until closed bracket is found
        else {
          printf("\nUNBALANCED EXPRESSION\n");
          exit(1);
        }
      }
    }
  }
  if(top == -1) printf("\nBALANCED EXPRESSION\n"); // Finally if the stack is empty, display that the expression is balanced
  else printf("\nUNBALANCED EXPRESSION\n");
}