#include <stdio.h>
/*in this program user able to enter some digits as steream then , the proram make summation of them then the user
take the output
then he has to enter no of digits of output , then he has to enter these digits each alone then program sum them 
again this process able to be repeated many times  */

void accept_digits(int k)
{
	int dig[100],i,sum=0;
	printf("\nplese enter digits and pres enter after each digit \n");
	
	for(i=0;i<=k-1;i++)
	{
		scanf("%d",&dig[i]);
		sum=sum+dig[i];
		
		if(i==k-1)
		{
			printf("super_digir( ");
			for(i=0;i<=k-1;i++)
			{
				printf("%d",dig[i]);
				
				if(i==k-1)
				{	
					printf(" ) =%d",sum);
					continue;
				}
			}
			continue;
		}
	}
	/*no need to creat new variable to contain (no of summ digits),reuse k another time 
	and other values too no need to create another variables wa also use all of them*/
	k=0;
	dig[100]=(0);
	sum=0;
	//receive the (no of summ digits) in k
	printf("\nplese enter no of digits of summation : ");
	scanf("%d",&k);
	printf("\nplese enter digits of summation and press enter after each digit \n");
	for(i=0;i<=k-1;i++)
	{
		scanf("%d",&dig[i]);
		sum=sum+dig[i];
		if(i==k-1)
		{
			printf("super_digir( ");
			for(i=0;i<=k-1;i++)
			{
				printf("%d",dig[i]);
				
				if(i==k-1)
				{	
					printf(" ) =%d",sum);
					continue;
				}
			}
			continue;
		}
	}
}

void main (void)
{
	int k;
	
	//enter the no of digits you want store them into k
	printf("plese enter no of digits you want : ");
	scanf("%d",&k);
	//call the function of super digit (taking k as input)
	accept_digits(k);
	
}