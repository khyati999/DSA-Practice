#include<stdio.h>
#include<stdlib.h>
struct NODE{
	int data,pr;
	struct NODE *next;
};
typedef struct NODE *NP;
NP head;

void enqueue(int x,int prio)
{
	NP ptr=(NP)malloc(sizeof(struct NODE));
	ptr->data=x;
	ptr->pr=prio;
	ptr->next=NULL;
	if(head==NULL)
	{
		head=ptr;
		printf("\nEnqueued:%d",head->data);
		return;
	}
	if(head->pr<prio)
	{
		ptr->next=head;
		head=ptr;
		printf("\nEnqueued:%d",head->data);
		return;
	}
	NP temp=head;
	while(temp->next!=NULL && temp->next->pr>prio)
	{
		temp=temp->next;
		ptr->next=temp->next;
		temp->next=ptr;
		printf("\n Queued:%d",temp->data);
		return;
	}
	
}
void dequeue(){
	if(head==NULL)
		printf("\n Underflow");
	
	NP temp=head;
	int t=temp->data;
	head=head->next;
	printf("\nDequeued element of high prio:%d",t); 
	free(temp);
   	return;
}
void peek()
{
	if(head==NULL)
		printf("\nEmpty");
	
	printf("\n High priority element:%d",head->data);
	return;
}

int main()
{
	printf("_____Priority queue_____");
	enqueue(1,4);
	enqueue(2,5);
	enqueue(6,8);
	dequeue();
	peek();
	return 0;
}
















