// Sumation of some entered variables 

#include<stdio.h>

int maxi(int arr[])
{
	int max=0;
	int i;
	for(i=0 ; i<10 ;i++);
	{
		max = max+arr[i];
	}
	return max;
}


void main(void)
{
	int arr[15];
	int i;
	int sum=0;
	
	for(i=0 ; i<10 ;i++)
	{
	    printf("\nplese enter (%d) : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\nplese enter (%d) : ",arr[9]);
	
	sum= maxi(arr);
	
	printf("\n %d ",sum);
}
