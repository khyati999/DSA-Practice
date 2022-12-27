#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *rear;
struct node *front;

void enqueue(int x)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    
    if(front==NULL)
    {
        front=ptr;
        rear=ptr;
        ptr->data=x;
        front->next=NULL;
        rear->next=NULL;
        printf("Rear element:%d\n",ptr->data);
    }
    else
    {
        ptr->data=x;
        rear=ptr;
        
        rear->next=NULL;
        printf("Rear element:%d\n",ptr->data);
    }
}
void dequeue()
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(front==NULL)
    {
        printf("Underflow!\n");
    }
    else{
        printf(" dequeued:%d\n",front->data);
        ptr=front;
        
        front=front->next;
        free(ptr);
        
    }
}



int main()
{
	enqueue(1);
	enqueue(2);
	enqueue(3);
	dequeue();
	enqueue(4);
	dequeue();
//	print();
	return 0;
}