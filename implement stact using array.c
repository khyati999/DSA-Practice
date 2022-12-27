#include<stdio.h>
#include<stdlib.h>
struct element
{

	int arr[10];
	int top;
	
};
int n,i;
struct element s1;
struct s1.top=-1;
void push(int data,struct s1)
{
    if(s1.top==10)
    {
         return overflow;
    }
    else
    {
    	 s1.top++;
        arr[s1.top]=data;
    }
}
	}
}
 
 int pop()
 {
     if(s1.top!=-1)
     {
         s1.top--;
         return (arr[top]);
     }
 }
 print_ele()
 {
     for(i=s1.top;i>-1;i++)
     {
         printf("%d",arr[i]);
     }
 }
int main()
{
    
    
    
    push(10,s1);
    push(20,s1);
    push(30,s1);
  pop(top);
    print_ele();
    return 0;
}

