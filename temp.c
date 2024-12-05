//  Structure for sample

/* Write a c program to define a structure employee with 
    1. eno
    2. ename
    3. esal */

#include <stdio.h>

struct employee {
    int eno;
    char ename[20];
    float esal;
    };

int main() {
    struct employee sai;
    printf("%d", sizeof(sai));
    printf("\nEnter employee info: ");
    scanf("%d", &sai.eno);
    scanf("%[^\n]s", &sai.ename);
    scanf("%f", &sai.esal);
    printf("\n%d", sai.eno);
    printf("\n%s", sai.ename);
    printf("\n%f", sai.esal);
}

/*Write a c program to define a structure called height having two parts 
    1. feet (int)
    2. inches (float)
create 3 strructure variables h1, h2, h3. Accept 2 heights from the user find
sum of heights and store it in h3. Also find who is tall among h1 and h2 */
#include <stdio.h>

struct height {
    int feet;
    float inches;
};

typedef struct height ht;

void accept(ht *ptr) {
    printf("Enter feet: ");
    scanf("%d", &ptr->feet);
    printf("Enter inches: ");
    scanf("%f", &ptr->inches);
}

void display(ht *ptr) {
    printf("Feet: %d, inches: %.2f\n", ptr->feet, ptr->inches);
}

void add(ht *p1, ht *p2, ht *p3) {
    p3->inches = p1->inches + p2->inches;
    if (p3->inches >= 12.0) {
        p3->inches = p3->inches - 12.0;
        p3->feet = p1->feet + p2->feet + 1;
    } else {
        p3->feet = p1->feet + p2->feet;
    }
}

void tall(ht *p1, ht *p2) {
    if (p1->feet > p2->feet) {
        display(p1);
    } else {
     if (p1->feet == p2->feet && p1->inches > p2->inches) {
      display(p1);
  } else {
   display(p2);
  }
    }
}

int main() {
    ht h1, h2, h3;

    printf("Enter h1:\n");
    accept(&h1);

    printf("\nEnter h2:\n");
    accept(&h2);

    add(&h1, &h2, &h3);

    printf("\nTaller height:\n");
    tall(&h1, &h2);

    printf("\nHeights:\n");
    display(&h1);
    display(&h2);
    printf("Sum of both heights is: ");
    display(&h3);

    return 0;
}


// STACKS

//Push function.
void push(int d) {
    if (top == n - 1) {
        printf("Stack is full");
    }
    else {
        s[++top] = d;
    }
}

//pop function.
int pop() {
    if (top==-1) {
        printf("Stack is empty");
        return -1;
    }
    else {
        x = s[top];
        top = top - 1;
        return x;
    }
}

//display function.
void display() {
    int i;
    for (i=top; i>=0; i--) {
        printf("\n%d", s[i]);
    }
}

//Peek Function.
void peek() {
 if (top == -1) {
  printf("\nStack is empty\n");
 } else {
  int x = s[top];
  printf("\nTopmost element is: %d\n", x);
 }
}


// QUEUE

void enqueue(int x) {
    if (rear == n - 1) printf("\nQueue is full\n");
    else if (rear == -1) {
        rear++;
        front++;  
        q[rear] = x;
    }
    else q[++rear] = x;
}


int dequeue() {
 if (front == -1) {
  printf("\nQueue is empty\n");
  return -1;
 } else if (rear == front) {
  int x = q[front];
  front = -1;
  rear = -1;
  
  return x;
 } else {
  int x = q[front++];
  return x;
 }
}


void display() {
 if (front == -1) {
  printf("\nQueue is empty\n");
 } else {
  for (int i = front; i <= rear; i++) {
   printf("%d ", q[i]);
  }
 }
}



// LINK LIST

//Display.
void display() {
    count = 0;
    temp = head;
    while (temp!=NULL) {
        printf("%d", temp -> data);
        count++;
        temp = temp -> link;
    }
}


void create() {
    node *t;
    do {
        t = (node *)malloc(sizeof(node));
        t -> link = NULL;
        printf("Enter data part: ");
        scanf("%d", &x);
        if (head == NULL) {
            head = t;
            temp = head;
        }
        else {
            temp -> link = t;
            temp = temp -> link;
        }
        printf("Do you want to create another node? press 1 to create and 0 to stop: ");
        scanf("%d", &ch);
        
    } while (ch!=0);
}


void findmax() {
    int max;
    node *temp;
    max = head -> data;
    temp = head -> link;
    while (temp!=NULL) {
        if (temp -> data > max) {
            max = temp -> data;
        }
        temp = temp -> link;
    }
    printf("Max data = %d", max);
}


void search() {
    printf("Enter data to search: ");
    scanf("%d", &x);
    for (temp = head; temp!=null; temp = temp -> link) {
        if (x == temp -> data) {
            found = 1;
            break;
        }
    }
    if (found) {
        printf("Data found");
    }
    else {
        printf("Data not found");
    }
}


// Write a function to insert a node in the beginning.
#include <stdio.h>

void insertbegin() {
    t = (node *)malloc(sizeof(node));
    printf("Enter the data part: ");
    scanf("z%d", &x);
    t->data = x;
    t-> link = head;
    head = t;
}


// Write a function to insert a node in the Ending.
#include <stdio.h>

void insertend() {
    node *t, *temp;
    int x;
    t = (node *)malloc(sizeof(node));
    printf("Enter the data part: ");
    scanf("%d", &x);
    t->data = x;
    i-> link = NULL;
    temp = head;
    while (temp->link!=NULL) {
        temp = temp->link;
    }
    temp ->link = t;
}