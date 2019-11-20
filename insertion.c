#include<stdio.h>
/*
int main()
{
	int a[6]={6,5,4,3,2};
int i,j,temp;
	for(i=0;i<5;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");


	*/

void insert(int a[],int f,int l)
{
	int i,j,temp;

	for(i=1;i<l;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
printf("insertion sort order:\n");

	for(i=0;i<l;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
}
