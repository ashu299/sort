#include<stdio.h>
void swap(int *p,int a,int b)
{
	int temp=0;
	temp=a;
	a=b;
	b=temp;
}

int main()
{
	int a[6]={8,1,4,5,2,9};
int i,j,min;
	for(i=0;i<6;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");

	for(i=0;i<6-1;i++)
	{
//		printf("loop in\n");
		min=i;
		for(j=i+1;j<6;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
//		printf("loop 222222222\n");
			}
		}
		if(min!=i)
		{
			swap(a,a[i],a[min]);
		}
	}

	for(i=0;i<6;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
}
