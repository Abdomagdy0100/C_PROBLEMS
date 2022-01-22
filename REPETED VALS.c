#include<stdio.h>

void main()
{
	int num[100];
	int  z,i,j,n,flag=1;
	int*r;
	printf("add  :  ",&r);
	int*ptr=&num[0];//pass the arry's first element address into pointer 
	
	//we used the pointer insted of array 
	printf("\nplese enter the number of elements you want to sort (max = 90) : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("plese enter num %d : ",i);
		scanf("%d",&ptr[i]);
	}
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-j-1;i++)//sorting
		{
			if(ptr[i]>ptr[i+1])//swaping
			{
				z=ptr[i+1];
				ptr[i+1]=ptr[i];
				ptr[i]=z;
				
			}
		}
		if (ptr[i+1]=ptr[i])
		{
			*r=ptr[i];
			flag++;
		}
		else 
		{
			&r+1;
			*r=ptr[i];
		}
	 
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",ptr[i]);
	}
	
	printf("add  :  ",&r);
}