#include<stdio.h>
#include<math.h>
# define max 100//maximum power of 3 -> [3^100]
void main()
{
	int num[100],ref[100];//arrays to contay user's values & values of 3^n
	int n,i,j;//n:no of elements , i&j for loops count
	int yes=0,no=0;//couters for numbers which are (3^n)->yes, and others not ->no
	do{
	printf("plesen enter number of elements (maximum = 100 element) : ");//take the no of elements from user
	scanf("%d",&n);
	
	if(n>100)//no of elements mustnot eceed 100 elements
	{
		printf("\nwarning-(maximum = 100 element)\n");
	}
	  }while(n>100);
	  
	for(i=0;i<max;i++)//filling an arry with refrence elements which we  will compare our entered elements with
	{
		ref[i]=pow(3,i);
	}
	
	for(i=0;i<n;i++)//accepting elements from user 
	{
		printf("\nplesen enter element %d : ",i);
		scanf("%d",&num[i]);
	}
	
	no=n;//assume all entered values are not (3^n)
	
	/* in the nxet step ,the first loop is for repeat number of times equal to number of elements  */
	/*the second loop for elements user entered to be compared with each element in refrenc array 
if the value valid the yes incresed by one and no decresed by one too to save (yes + no = no of elements)	*/
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if(num[j]==ref[i])
			{
				yes++;
				no--;
				break;
			}
		}
	}
	printf(" %d of elements of array  result from 3 power n\n ",yes);
	printf(" %d of elements of array  not result from 3 power n\n ",no);
	
}