#include <stdio.h>
#include <stdlib.h>

struct NODE {
	int data;
	struct node* next;
};

typedef struct NODE node;
  	node* front;
 	node* rear;


void insert( int data) 
{
	 node *n;
	n = ( node *) malloc (sizeof( node));
	if (n == NULL)
	 {
		
		return;
	} 
	else {
		n -> data = data;
		if (front == NULL) 
		{
			front = n;
			rear = n;
			front -> next = NULL;
			rear -> next = NULL;
		} 
		else {
			rear -> next = n;
			rear = n;
			rear->next = NULL;
		}
	}
}

void deque()
{
	node* n;
	if(front==NULL)
	{
		return;
		
	}
	else
	{
		n=front;
		front=front->next;
		free(n);
	}
	
}

int main() {
	struct node* head = NULL;
	insert( 10);
	insert( 20);
	insert( 30);

	printf("front element: %d", front->data);
	printf("\nrear element: %d", rear->data);
	deque();
	printf("\nfront element: %d", front->data);
	printf("\nrear element: %d", rear->data);
	
	return 0;
}     