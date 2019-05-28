#include<stdio.h>

void main(){

	int arr[50],n,i,j;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");

	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	mergesort(arr,0,n-1);
	
	printf("\nSorted array is :");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
		
	
}
 
void mergesort(int arr[],int i,int j)
{
	int mid;
		
	if(i<j)
	{
		mid=(i+j)/2;
		mergesort(arr,i,mid);		//left recursion
		mergesort(arr,mid+1,j);	//right recursion
		merge(arr,i,mid,j);	//merging of two sorted sub-arrays
	}
}
 
void merge(int arr[],int low,int mid,int high)
{
	int temp[50];	//array used for merging
	int i,j,k;

	for(i=low;i<=high;i++)
		temp[i] = arr[i];

	i=low;	//beginning of the first list
	j=mid+1;	//beginning of the second list
	k=low;
	
	while(i<=mid && j<=high)	//while elements in both lists
	{
		if(temp[i]<temp[j])
			arr[k++]=temp[i++];
		else
			arr[k++]=temp[j++];
	}
	
	while(i<=mid)	//copy remaining elements of the first list
		arr[k++]=temp[i++];
		
}