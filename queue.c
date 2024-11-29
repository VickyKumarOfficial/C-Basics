//CONSIDER A QUEUE OF SIZE 4 , CAPABLE OF STROING INTEGER DATA , SHOW STEP BY STEP PROCESS FOR THE FOLLOWING OPERATION
//ENQUE10 ENQUE20 ENQUE30 DISPLAY ENQUE40 ENQUE50 DEQUE DEQUE DISPLAY DEQUE DISPLAY
#include<stdio.h>
#include<stdlib.h>
#define n 5
int q[n];
int rear =-1;
int front = -1;
void enque(int d);
int deque();
void display();

int main()
{
  int x,ch,d;
  while(1)
  {
  
printf("\n1. enque\n2. deque\n3. display\n4.exit ");
printf("\nEnter your choice");
scanf("%d",&ch);
switch(ch)
{
  case 1:
    printf("Enter data to insert");
    scanf("%d",&d);
    enque(d);
    break;
  case 2:
    x = deque();
    printf("\nDeleted data is %d ",x);
    break;
  case 3:
    display();
    break;
  case 4:
    printf("\n Bye Bye");
    exit(1);
  default:
    printf("Invalid choice");
}
}
}
void enque(int d)
{
  if(rear == n-1) //queue is full
  {
    printf("Queue is full");
  }
  else if(rear == -1) // insert into empty queue
  {
  rear = 0;
  front = 0;
  q[rear]=d;
    }
    else //normal insertion
    {
    rear = rear +1;
  q[rear]=d;  
  }
}  
int deque()
{
  int x;
  if(front == -1)
  {
    printf("Queue is empty");
    return -1;
  }
  else if(front == rear)//queue is having only one element
  {
    x=q[front];
    front = -1;
    rear = -1;
    return x;
  }
  else 
  {
    x=q[front];
    front = front+1;
    return x;
  }
}
void display()
{
  int i;
  printf("\n Queue contents are    ");
  for(i=front;i<=rear;i++)
  {
    printf("%d   ",q[i]);
  }
}