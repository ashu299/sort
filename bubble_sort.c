#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,j,temp;
	int flag;
	printf("enter the n value:");
	scanf("%d",&n);

	int arr[n];
	//int i,n;
	//printf("enter the n value\n");
	for(i=0;i<n;i++)
	{
		printf("enter the elements in arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("array is--------------------\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n\n\n");
	printf("array in sorted order-------------\n");

	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
			break;
	}

	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n\n");
}


