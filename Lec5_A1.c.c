# include <stdio.h>
//lab 3
void main()
{
	int num[10];
	int i=0;
	int z=0;
	int j=0;

	for(i=0;i<10;i++)
	{
	printf("plese enter the num %d : ",i);
    scanf("%d",&num[i]);
    }
	
	for(j=0;j<10-1;j++)//the sorting is done (size-1 )times 
	{
		for(i=0;i<10-j-1;i++)//the 
		{
			if(num[i]>num[i+1])//swapping betwwn lower and higher 
			{
				z=num[i+1];
				num[i+1]=num[i];
				num[i]=z;
			}
		}
	}	
	printf("/n numbers after sorting from mini to max : ");
	for(i=0;i<10;i++)
	{
	printf("\n%d",num[i]);
	}
	printf("\n\n mini value : %d",num[0]);
	printf("\n\n max value : %d",num[9]);
}