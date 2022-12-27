#include<stdio.h>
int main(){
	int i,j,n,temp;
	printf("Enter the limit:");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			else
				continue;
		}
	}
	printf("Elements are after sorting:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}