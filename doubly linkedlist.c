#include<stdio.h>
#include <stdlib.h>
struct NODE
{
    int data;
    struct node *prev;
    struct node *next;
};
typedef struct NODE node;
node *head=NULL;
node *tail=NULL;

void create_node(int data)
{
    node *new;
    new=(node*)malloc(sizeof(node));
    new->data=data;

    if(head==NULL)
    {
        head=tail=new;
        head->prev=NULL;
        tail->next=NULL;
    }
    else
    {
        tail->next=new;
        new->previous==tail;
        tail=new;
        tail->next=NULL;

    }
}

void reverse()
{
    node *current=head;
    node *t=NULL;
    t=current->next;
    current->next=current->prev;
    current->prev=t;
    current=current->prev;
    
    
    t=head;
    head=tail;
    tail=t;
}

print_node()
{
    node *current=head;
    if(head==NULL)
    {
        printf("empty list\n");
    }
    while(current!=NULL)
    {
        printf("%d",current->data);
        current=current->next;
    }
}

int main()
{
    
    create_node(10);
    create_node(20);
    create_node(30);
    create_node(40);

    printf("list:\n");
    print_node();
    
    reverse_node();
    printf("reverse:\n");
    print_node();
}