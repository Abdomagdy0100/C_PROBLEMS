#include<stdio.h>

void main()
{
	int num[100];
	int count [100]={0};
	int  z,i,j,n;
	
	int*ptr=&num[0];//pass the arry's first element address into pointer 
	
	//we used the pointer insted of array 
	printf("plese enter the number of elements you want to sort (max = 90) : ");
	scanf("%d",&n);
	printf("\nplese enter the numbers from( 0  to  %d )\n",n);
	
	for(i=0;i<n;i++)
	{
	do{
		printf("plese enter num %d : ",i);
		scanf("%d",&ptr[i]);
	if (ptr[i]>n)
        printf("\nplese re enter the number again smaller or equal number of elements\n");
	  }while(ptr[i]>n);
	}  
	printf("\n\n times of occurance --\n\n");
	for(i=0;i<n;i++)
		{
			count[ptr[i]]++;//seching for any number ocured
		}
	for(i=0;i<n;i++)
		{
			printf("%d is occured %d times \n",i,count[i]);
		}
}