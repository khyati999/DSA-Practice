#include<stdio.h>
#include<stdlib.h>
struct NODE
{
    int data;
    struct NODE *next;
};
typedef struct NODE node;
node *head=NULL;
node *create_node(int a)
{
    node *new;
    new=(node*)malloc(sizeof(node));
    new->data=a;
    new->next=NULL;
    return new;
}

void insert_node(node *n)
{
    if(head ==NULL)
    {
        head==n;
    }
    else
    {
        node *t;
        t=head;
        while(t->next!=NULL)
        {
            if(t->next==NULL)
            {
                t->next=n;
                break;
            }
        }
    }
}
void print_node()
{
    node *t;
    t=head;
    while(t->next !=NULL)
    {
        printf("\n%d",t->data);
    }
}

int main()
{
     node *a,*b,*c,*d;
    a=create_node(10);
    b=create_node(20);
    c=create_node(30);
    d=create_node(40);

    insert_node(a);
    insert_node(b);
    insert_node(c);
    insert_node(d);
    print_node();
    return 0;
}
