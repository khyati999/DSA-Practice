#include<stdio.h>
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

int partition(int a[],int first,int last)
{	
	int loc;
    int l=first;
	int r=last;
	int pivot=a[first];
	while(l<r)
	{
		
		while(a[l]>=pivot)
		l++;
				
		while(a[r]<pivot)
		r--;
		
		if(l<r)
		swap(&a[l],&a[r]);
	}
	
	loc=r;
	swap(&a[first],&a[r]);
	return loc;
}
void quick_sort(int a[],int f,int l)
{
	
	if(f<l)
	{
	  int loc=partition(a,f,l);
		quick_sort(a,f,loc-1);
		quick_sort(a,loc+1,l);
	}
}
int main()
{
	int i,j,n,temp;
	printf("Enter the limit:");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	quick_sort(arr,0,n-1);
	printf("Elements are after sorting:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}