// #include<stdio.h>
// #include<stdlib.h>

// struct queue {
// 	int data;
// 	struct queue *link;
// }*front=NULL,*rear=NULL;

// void enqueue(int a) {
// 	struct queue *n = malloc(sizeof(struct queue));
// 	n->data = a;
// 	n->link = NULL;
// 	if(front == NULL) front = n;
// 	else rear->link = n;
// 	rear = n;
// }

// void dequeue() {
// 	struct queue *temp = front;
// 	if(temp != NULL) {
// 		int x = temp->data;
// 		printf("\nThe deleted data:%d",x);
// 		front = front->link;
// 		free(temp);
// 	}
// 	else printf("Queue is empty");
// }
// void peek() {
// 	if(front != NULL) printf("\nThe front data:%d",front->data);
// 	else printf("Queue is empty");
// }

// void display() {
// 	struct queue *temp = front;
// 	if(temp != NULL) {
// 		while(temp != NULL) {
// 			printf("\nDATA:%d",temp->data);
// 			temp = temp->link;			
// 		}
// 	}
// 	else printf("Queue is empty");
// }
// void main() {
// 	int ch,cont,x;
// 	do {
// 		printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.PEEK\n");
// 		printf("Enter your choice:");
// 		scanf("%d",&ch);
// 		switch(ch) {
// 			case 1:
// 				printf("enter the data:");
// 				scanf("%d",&x);
// 				enqueue(x);
// 				break;
// 			case 2:
// 				dequeue();
// 				break;
// 			case 3:
// 				display();
// 				break;
// 			case 4:
// 				peek();	
// 				break;		
// 		}
// 		printf("\nEnter 1 to continue or other number to exit:");
//     	scanf("%d",&cont);
// 	}while(cont==1);
// }


















