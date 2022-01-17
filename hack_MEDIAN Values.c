#include<stdio.h>

void main()
{
	int arr1[100],arr2[100],arr3[100];
	int i=0,j=0,n1,n2,z;
	int med;
	//number of elements in arrays
	printf("\t---plese enter no pf values for arrays ---");
	printf("\narry 1 : ");
	scanf("%d",&n1);
	printf("\narry 2 : ");
	scanf("%d",&n2);
	
	//receive values from user for two arrays 
	for(i=0;i<n1;i++)
	{
		if(i==0)
		printf("\t---plese enter values for array1 ---");
		printf("\narr1 value %d :",i);
		scanf("%d",&arr1[i]);
		if(i==n1-1)
		{
			i=0;
			printf("\t---plese enter values for array2 ---");
			for(i=0;i<n2;i++)
			{	
				printf("\narr2 value %d :",i);
				scanf("%d",&arr2[i]);
				if(i==(n1+n2)-1)
				break;
			}
		}
	}
	
	//passing values of two arrays 1&2 into third array
	for(i=0;i<(n1+n2);i++)
	{
		if(i<n1)
			arr3[i]=arr1[i];
		if(i>=n1)
		{
			arr3[i]=arr2[j];
			j++;
		}
	}
	
	//sorting for the final array
	for(j=0;j<(n1+n2)-1;j++)
	{
		for(i=0;i<(n1+n2)-j-1;i++)
		{
			if(arr3[i]>arr3[i+1])
			{
				z=arr3[i+1];
				arr3[i+1]=arr3[i];
				arr3[i]=z;
			}
		}
	}	
	//printing values after sorting
	for(i=0;i<(n1+n2);i++)
	{
		printf("\narr3 value %d : %d",i,arr3[i]);
	}	
	//getting the middle value
    med=(n1+n2)/2;
	//printing the meddel values depending on is it evan or odd ?
	if ((n1+n2)%2 == 0)
	{
    //even
	printf("\nmiddlevalue 1 : %d",arr3[med-1]);
	printf("\nmiddlevalue 2 : %d",arr3[med]);
	}
     else
	{
     //odd
	 printf("\nmiddlevalue 1 : %d",arr3[med]);
	}
}
