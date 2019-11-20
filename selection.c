#include<stdio.h>
void swap(int *p,int f,int l)
{
	int temp=0;
	temp=*(p+f);
	*(p+f)=*(p+l);
	*(p+l)=temp;

//	printf("swappppp%d %d\n",f ,l);
}
/*


int main()
{
	int arr[10],i,j,temp;
	printf("enter the elements:\n");
	for(i=0;i<10;i++)
	{
		printf("enter the arr[%d]:",i);
		scanf("%d",&arr[i]);
	}

	printf("------------------------------------------\n");
	printf("array are:\n");

	for (i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	*/
void select(int a[], int f, int l)
{
	int i,j,min;
	printf("---------------------------\n");

	for (i=0;i<10-1;i++)
	{
		int min =i;
		for(j=i+1;j<10;j++)
			{
				if(a[j]<a[min])
				{
					min=j;
				}
			}
		if(min!=i)
		{
			swap(a,i,min);

		}
	}
	
	
printf("selection sort order:\n");
	for (i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
}
