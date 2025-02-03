#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *link;
}*top=NULL;

void push(int ele)
{
  struct node *newnode;
  newnode=(struct node *)malloc(sizeof(struct node));
  newnode->data=ele;
  newnode->link=top;
  top=newnode;
}

void pop()
{
  struct node *temp=top;
  int x;
  if(temp!=NULL)
  {
    x=temp->data;
    top=top->link;
    printf("The Element deleted is: %d\n",x);
    free(temp);
  }
  else
    printf("Stack is Empty\n");
}
void display()
{
  struct node *temp=top;
  if(top!=NULL)
  {
    while(temp!=NULL)
    {
      printf("\n%d",temp->data);
      temp=temp->link;
    }
    printf("\n");
  }
  else
    printf("Stack is empty\n");
}

void peek(){
  if(top==NULL)
  printf("Stack is Empty\n");
  else
  printf("The top Most element is: %d\n",top->data);
}

void peep(int ele)
{
  if(top==NULL)
  printf("Elements are not existed in the stack.\n");
  struct node *temp=top;
  int c=0,i=1;
  while(temp!=NULL)
  {
    if(temp->data==ele)
	{
      c=1;
      break;
    }
    else{
      temp=temp->link;
      i++;
    }
  }
  if(c==0)
  printf("Element Not found\n");
  else
  printf("Element found at %d index, %d position.\n",i-1,i);
}

int main()
{
  int ch,ele,cont;
  do{
    printf("1.To Push data\n2.Display\n3.Delete top element(pop)\n4.print top most element\n5.search an element\n");
        scanf("%d",&ch);
    switch(ch)
    {
      case 1:
        printf("Enter the element:");
        scanf("%d",&ele); 
        push(ele);
        break;
      case 2:
          display();
          break;
      case 3:
          pop();
          break;
      case 4:
        peek();
        break;
      case 5:
        printf("Enter the element to be searched int the stack: ");
        scanf("%d",&ele);
        peep(ele);
        break;
    }
    printf("Enter 1 to continue, 0 to exit");
    scanf("%d",&cont);
   }while(cont==1);
}
