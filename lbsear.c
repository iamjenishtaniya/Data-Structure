/*Binary Search*/
#include<stdio.h>

int main()
{
    	int a[50],n,i;
    	printf("Enter Number of element you want to add : ");
    	scanf("%d",&n);
   	 
    	for(i=0;i<n;i++)
	{
                printf("Array[%d] = ",i);
            	scanf("%d",&a[i]);
    	}
	int low,high,mid,element,j;
    	low=0;
    	high=n-1;
    
    	printf("\nEnter the searching Element : ");
    	scanf("%d",&element);
        int flag = 0;
    	while(low<=high)
	{
            	mid = (low+high)/2;
            	if(element == a[mid])
		{
                    	printf("\nSearching Element Founded \n");
                        flag = 1;   
                    	return 0;
            	}
            	else if(element < a[mid])
		{
                    	high = mid - 1;
            	}
		else if (element > a[mid])
                {
                    	low = mid + 1;
                }
    	}
        if (flag == 0)
        {
                    
    		printf("\nSearch element Not Founded....\n");
		return 0;
	}
}

/*Linear Search*/

#include<stdio.h>
void main()
{
    int arr[50],element,n;
    printf("\nEnter The Size Of Array : ");
    	scanf("%d",&n);
   	 
    	for(int i=0;i<n;i++)
	{
                printf("\nArray[%d] = ",i);
            	scanf("%d",&arr[i]);
    	}
	printf("\nEnter the Element to be Search : ");
	scanf("%d",&element);
    
	for (int i=0;i<n;i++)  
	{  
    		if (arr[i] == element)
		{
    			printf("\n Element Searched\n");
    			return;
		}
	}
 	printf("\nelement Not Founded....\n");    
}
