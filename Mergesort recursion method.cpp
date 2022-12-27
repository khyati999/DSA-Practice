#include<stdio.h>

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    
    int L[n1], R[n2];
 
    
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergesort(int a[],int f,int l)
{
	int mid;
	if(f<l)
	{
		mid=(f+l)/2;
		mergesort(a,f,mid);
		mergesort(a,mid+1,l);
		merge(a,f,mid,l);
	}
}
int main()
{
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}