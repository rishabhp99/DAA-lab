#include<stdio.h>

void main(){

	int arr[50],n,i,j,temp;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the elements:\n")

	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	for(i=1;i<n;i++)
		for(j=0;j<(n-i);j++)
			if(a[j]<a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;

			}

	printf("\nArray after sorting:\n");
	for(i=0;i<n;i++)
		printf("%d",arr[i]);

}