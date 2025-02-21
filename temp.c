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

// #include <stdio.h>
// #include <stdlib.h>

// #define MAX 10
// int dq[MAX];
// int front = -1, rear = -1;

// void display() {
//     if (front == -1) {
//         printf("\nDouble-ended Queue is empty\n");
//         return;
//     }
//     printf("\nElements in Double-Ended Queue: ");
//     for (int i = front; i <= rear; i++)
//         printf("%d ", dq[i]);
//     printf("\n");
// }

// void insert_front(int x) {
//     if (front == 0) {
//         printf("\nInsertion at front not possible");
//         return;
//     }
//     if (front == -1) {
//         front = rear = 0;
//     } else {
//         front--;
//     }
//     dq[front] = x;
// }

// void insert_rear(int x) {
//     if (rear == MAX - 1) {
//         printf("\nDouble-ended Queue is full");
//         return;
//     }
//     if (rear == -1) {
//         front = rear = 0;
//     } else {
//         rear++;
//     }
//     dq[rear] = x;
// }

// void delete_front() {
//     if (front == -1) {
//         printf("\nDouble-ended Queue is empty");
//         return;
//     }
//     printf("\nDeleted element: %d", dq[front]);
//     if (front == rear)
//         front = rear = -1;
//     else
//         front++;
// }

// void delete_rear() {
//     if (rear == -1) {
//         printf("\nDouble-ended Queue is empty");
//         return;
//     }
//     printf("\nDeleted element: %d", dq[rear]);
//     if (front == rear)
//         front = rear = -1;
//     else
//         rear--;
// }

// int main() {
//     int choice, val;
//     while (1) {
//         printf("\n\n1. Insert Front\n2. Insert Rear\n3. Delete Front\n4. Delete Rear\n5. Display\n6. Exit");
//         printf("\nEnter choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("\nEnter value: ");
//                 scanf("%d", &val);
//                 insert_front(val);
//                 break;
//             case 2:
//                 printf("\nEnter value: ");
//                 scanf("%d", &val);
//                 insert_rear(val);
//                 break;
//             case 3:
//                 delete_front();
//                 break;
//             case 4:
//                 delete_rear();
//                 break;
//             case 5:
//                 display();
//                 break;
//             case 6:
//                 exit(0);
//             default:
//                 printf("\nInvalid choice");
//         }
//     }
//     return 0;
// }
