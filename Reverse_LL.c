#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
typedef struct node *NP;
NP head;


void enqueue(int data){
	NP ptr=(NP)malloc(sizeof(struct node));
	
	ptr->data=data;
	ptr->next=NULL;
	if(head==NULL)
	{
		head=ptr;
		return;
	}
ptr->next=head;
head=ptr;
	
}
void reverse()
{
    NP prev=NULL;
NP cur=head;
NP next=NULL;
    
    	while(cur!=NULL)
	{
		next=cur->next;
		cur->next=prev;
		prev=cur;
		cur=next;
	}
	head=prev;
}
void print()
{
	NP temp=head;
	
	while(temp!=NULL)
	{
		printf("\n%d",temp->data);
		temp=temp->next;
	}
}


int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	print();
	return 0;		
}






