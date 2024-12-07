#include<stdio.h>
#define n 4
int stack[n];
int top = -1;
void push(int d);
int pop();
int peek();
void display();
int main()
{
  int x,ch,d;
  while(1)
  {
  
printf("\n1. push\n2. pop\n3. peek\n4.display\n 5.exit ");
printf("\nEnter your choice");
scanf("%d",&ch);
switch(ch)
{
  case 1:
    printf("Enter data to push");
    scanf("%d",&d);
    push(d);
    break;
  case 2:
    x = pop();
    printf("\nPopped data is %d ",x);
    break;
  case 3:
    x = peek();
    printf("\ntop most  data in the stack  is %d ",x);
    break;
  case 4:
    display();
    break;
  case 5:
    printf("\n Bye Bye");
    exit(1);
  default:
    printf("Invalid choice");
}
}
}
void push(int d)
{
  if(top==n-1)
  {
    printf("Stack overflow");
  }
  else
  {
    top=top+1;
    stack[top]=d;
  }
}
int pop()
{
  int x;
  if(top==-1)
  {
    printf("stack is empty");
    return -1;
  }
  else
  {
    x=stack[top];
    top=top-1;
    return x;
  }
}
void display()
{
  int i;
  printf("Stack contents are");
  for(i=top;i>=0;i--)
  {
    printf("\n%d",stack[i]);
  }
}
int peek()
{
  int x;
  if(top==-1)
  {
    printf("Stack is empty");
    return -1;
  }
  else
  {
    x=s[top];
    return x;
  }
}