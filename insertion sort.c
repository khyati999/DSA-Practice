#include<stdio.h>
int main()
{
	int i,j,n,temp;
	printf("Enter the limit:");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<n;i++)
	{
				temp=arr[i];
				j=i-1;
				while(j>=0 && arr[j]>temp)
				{
					arr[j+1]=arr[j];
					j--;
				}
				arr[j+1]=temp;
	}
	printf("Elements are after sorting:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}