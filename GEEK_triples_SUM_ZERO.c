#include<stdio.h>

void findTriplets()
{
	int arr[100];
	int i,n,j,k,flag=0;
	printf("\nplese enter no of values of array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf ("\nenter the %d value : ",i);
		scanf("%d",&arr[i]);
	}
	
	//triples 
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
		       if(arr[i]+arr[j]+arr[k]==0)
			   {
				   flag++;
			   }
			   else
				   continue;
			}	   
		}
	}
	
	printf ("\ntriples = %d  ",flag);
}

void main()
{
	findTriplets();
}