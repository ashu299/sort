#include<stdio.h>
#include"header.h"

int main()
{
	int a[10]={9,8,7,4,5,3,6,2,1,10};
	int ch;
	int f,l;
	f=0;
	l=10-1;
	while(1)
	{
	printf("\n\n1)insertion\n2)bubble\n3)select\n4)quick\n5)merge\n");
	printf("selection sortting techniques:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		

		case 1:insert(a,f,l);break;
		       
		case 2:bubble_sort(a,f,l);break;

		case 3:select(a,f,l);break;

		case 4:quicksort(a,f,l);break;

		case 5:mergeSort(a,f,l+1);break;

		        
	}
	}
}
