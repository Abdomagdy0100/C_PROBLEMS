#include <stdio.h>
/*in this prgram : we need to indicate the most repeted value in the array*/
void main (void)
{
	int arr[10]={1,2,3,4,2,2,7,2,2,2};
	int flag;
	int flag_update =0;
	int i,z,num;
	
	for(i=0 ; i<10 ;i++) //choosing 1 element from array
	{
		flag=0; // reset the flag before new comparison
		
		for(z=i ; z<10 ;z++) //here the choosen element will be compared with all other elements-start from i not from 0 
		{
			if(arr[i] == arr[z] && z>i) //if the choosen found again
			{
				flag++; //increment the flag by 1 "found one more time"
				
				if(flag > flag_update) //is the storred flag value higher than flag_update
				{
					num = arr[i];
					flag_update = flag;
				}
			}	
		}
	}
	printf("\n %d  repeated = %d times",num,flag_update+1);	
}