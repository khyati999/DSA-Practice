#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head;

void push(int x)
{

struct node	*ptr=(struct node *)malloc(sizeof(struct node));
	
	if (head==NULL)
	{
	    ptr->data=x;
	    ptr->next=NULL;
	    head=ptr;
	    printf("\npushed element:%d",head->data);
	}
	else
	{
		ptr->data=x;
		ptr->next=head;
		head=ptr;
		printf("\npushed element:%d",head->data);
	}
					
	
}

void pop()
{
    int temp;
    struct node *ptr;
    if(head==NULL)
    {
        printf("Underflow");
    }
    else
    {
        temp=head->data;
        ptr=head;
        head=head->next;
        free(ptr);
         printf(" \npopped element:%d",temp);
    }
    //printf("Element is popped\n");
}
void peek()
{
	printf("\nTop element is:%d",head->data);
}
int main()
{
	push(1);
	push(2);
	push(3);
	peek();
	pop();
	push(4);

	pop();
	return 0;
}