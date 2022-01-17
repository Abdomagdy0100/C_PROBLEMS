#include <stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	int *ptr;
	int i;
	
	printf("plese enter no of elements : ");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("\nelement %d  = %d ",i,ptr[i]);
	}
	
	ptr[0]=3;
	ptr[1]=5;
	ptr[2]=5;
	ptr[3]=6;
	ptr[4]=7;
	
	printf("\n\n\n");
	for(i=0;i<n;i++)
	{
		printf("\nelement %d  = %d ",i,ptr[i]);
	}
}
