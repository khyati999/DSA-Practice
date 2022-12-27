#include<stdio.h>
#include<stdlib.h>
# define max 25
struct queue{
	int front,rear;
	int arr[max];
};
typedef struct queue *NP;
int empty(NP a){
	return((a->rear==a->front?1:0));
}
void enqueue(NP a,int x)
{
	int temp=a->rear;
	if(a->rear==max-1)
	{
		a->rear=0;
	}
	a->rear++;

	if(a->rear==a->front)
	{
		printf("\nOverflow!");
		a->rear=temp;
		return;
	}
	a->arr[a->rear]=x;
		printf("\n enqueue:%d",a->arr[a->rear]);
}

void dequeue(NP a)
{
	if(empty(a))
	{
		printf("\n Underflow");
		return;
	}
	if(a->front==max-1)
	{
		a->front=0;
	}
	a->front++;
	printf("\n dequeue:%d",a->arr[a->front]);
	return;
}
void front(NP a){
 	if(empty(a))
 		printf("\n Empty Queue");	
	
	if(a->front==max-1)
	{
		a->front=0;
	}
	a->front++;
	printf("\n Element at the front:%d",a->arr[a->front]);
	return;
}

int main(){
NP q=(NP)malloc(sizeof(struct queue));
q->front=max-1;
q->rear=max-1;
enqueue(q,1);
enqueue(q,2);
enqueue(q,3);
dequeue(q);
front(q);
free(q);	
return 0;
}