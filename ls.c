#include<stdio.h>

void main()
{
	int i,no;
	int arr[10];
	printf("Enter how many element you want in the list=");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		printf("Enter element=");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<no;i++)
	{
		printf("A[%d]=%d \n",i,arr[i]);
	}
	int search;
	printf("Enter no. that you want to search=");
	scanf("%d",&search);
	for(i=0;i<no;i++)
	{
		if(arr[i]==search)
		{
			printf("searched a[%d] =%d \n",i,search);
			break;
		}
	}
	if(i==no)
	{
		printf("number not found !!\n");
	}
}
