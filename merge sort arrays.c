#include<stdio.h>
int main()
{
	int m,n,c;
	printf("value:");
	scanf("%d%d",&m,&n);
	int num1[m],num2[n];
	printf("Elements of 1:");
	for(int i=0;i<m;i++)
	{
		scanf("%d",&num1[i]);
	}
	printf("Elements of 2:");
	 for(int i=0;i<n;i++)
	 {
	 	scanf("%d",&num2[i]);
	 }
	 
	 c=n+m;
	 int a[c];
	 for(int i;i<m;i++)
	 {
	 	a[i]=num1[i];
	 }
	 for(int i=0;i<n;i++)
	 {
	 	a[i+m]=num2[i];
	 }
	 
	  int i = 0, j = 0, k = 0;

    while (i < m && j < n)    
    {
        if (num1[i] < num2[j])
            a[k++] = num1[i++];   
        else
            a[k++] = num2[j++];
    }
  
    while (i < m)    
        a[k++] = num1[i++];
  
    while (j < n)    
        a[k++] = num2[j++];
    
    printf("Final array after merging: ");
    for(int i = 0; i < c; i++)        
   {  
   int temp=0;
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            
        }
        else
        {
            i++;
        }
        i++;
   }
   for(int i = 0; i < c; i++)
   {
       printf(" %d ",a[i]);
   }
    return 0;   
}