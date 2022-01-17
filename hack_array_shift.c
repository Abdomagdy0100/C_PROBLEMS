#include <stdio.h>

void main(void)
{
int i,s,temp, seq[5]={1,2,3,4,5};

	printf("\n\t\t plese enter no of shifts : ");
	scanf("%d",&s);
	
	//original array 
	for(i=0 ; i<=4 ; i++)
	{
		printf("\n ele %d = %d ",i+1 , seq[i]);
	}
	
	//shifting
	
	 temp=seq[4];
	
	for(i=4 ; i>=0 ; i--)
	{
		seq[i]=seq[i-1];
	}
	
	seq[0]=temp;
	
	//after sorting
	for(i=4 ; i<=0; i--)
	{
		printf("\n ele %d = %d ",i+1 , seq[i]);
	}
}