#include<stdio.h>
int j,i=0;
//receve the address of values in pointer 
void sort(int*sor)
{
	int z;
	for(j=0;j<10-1;j++)
	{
		for(i=0;i<10-j-1;i++)
		{
			if(sor[i]>sor[i+1])//pointer as an array
			{
				//swaping
				z=sor[i+1];
				sor[i+1]=sor[i];
				sor[i]=z;
			}
		}
	}	
	for(i=0;i<10;i++)
	{
		printf ("\nvalue %d at address(%d): %d  ",i,&sor[i],sor[i]);
	}
}

void main()
{
	int arr[10];
	for(i=0;i<10;i++)
	{
		printf ("plese enter value %d at address(%d): ",i,&arr[i]);
		scanf("%d",&arr[i]);
	}
	printf ("\n after sorting \n");
	//pass by refrence
	sort(&arr[0]);
}