#include <stdio.h>

void main (void)
{
	int i, v, arr[5]={0};
	int flag1,OP1,OP2,flag2=0;
	
	printf("enter the array values : ");
	
	for(i=0 ; i<5 ; i++)
	{
		scanf("\n  %d",&arr[i]);
	}
	
	for(i=0 ; i<5 ; i++)
	{
		for(v=1 ; v<5 ; v++)
		{
			flag1=arr[i]^arr[v];
			if(v==0)
			{
				flag2=flag1;
			}
			if(flag1>flag2)
			{
				flag2=flag1;
				OP1 = arr[i];
				OP2 = arr[v];
			}
		}
	}
	printf("max XORing = %d  between (%d  &  %d)",flag2,OP1,OP2);
}