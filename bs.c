/*
Enr No:-
Name:-Jenish Taniya
Class:-MCA I Sem1
Remarks:-Bubble Sort on an Array
*/

#include<stdio.h>

int main()
{
	int n;
	printf("Enter the elements:- \n");
	scanf("%d",&n);
	int a[n];
	printf("Enter Number\n");
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("before \n");
	for( int i=0;i<n;i++)
	{
		printf("a[%d]=%d \n",i,a[i]);	
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
	}
	printf("after \n");
	for( int i=0;i<n;i++)
	{
		printf("a[%d]=%d \n",i,a[i]);	
	}
	return 0;


}
