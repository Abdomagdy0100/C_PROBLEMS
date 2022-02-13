#include <stdio.h>



void main (void)
{
	int kang_pos_old[2];
	
	int kang_speed[2];
	
	int kang_1_pos_update;
	int kang_2_pos_update;
	
	int i=1;
	
	int diffrence ,flag=0 ;
	
	for(i=1 ; i<=2 ; i++)
	{
		printf("\n\nEnter the old position of kang_%d : ",i);
		scanf("%d",&kang_pos_old[i]);
		
		printf("\nEnter the speed of kang_%d -[Max=4] : ",i);
		scanf("%d",&kang_speed[i]);
		
		if (i == 1)
		{
			kang_1_pos_update = kang_pos_old[i] + kang_speed[i];
			printf("\n\n the new position of kang_%d : %d ",i,kang_1_pos_update);
		}
		else
		{
			kang_2_pos_update = kang_pos_old[i] + kang_speed[i];
			printf("\n\n the new position of kang_%d : %d ",i,kang_2_pos_update);
		}
	}

	
	if (kang_1_pos_update == kang_2_pos_update)
	{
		printf("\n\nyes, they are in the same position ");
	}
	
	else if (kang_1_pos_update < kang_2_pos_update)
	{
		diffrence = kang_2_pos_update - kang_1_pos_update;
		printf("\n\nNo, they are not in the same position");
		printf("\n Second kangaroo should wait untell the first come");
		printf("\n \t diffrence : %d positions",diffrence);
		
		if (diffrence >= 4 )
		{
			flag = (diffrence/4); //division output will be integer as flag type
			
			diffrence = diffrence - 4*flag;

			printf("\nfirst kangaroo must increase speed to 4 steps untell diffrence ( %d ) ",diffrence);
			printf("then back to the original speed");
		}
		
		if (diffrence < 4 )
		{
			printf("\nsecond kangaroo's forst speed sould be %d ",diffrence);
		}
		
	}
	
	else
	{
		diffrence = kang_1_pos_update - kang_2_pos_update;
		printf("\n\nNo, they are not in the same position");
		printf("\n first kangaroo should wait untell the second come");
		printf("\n \t diffrence : %d positions",diffrence);
		
		if (diffrence >= 4 )
		{
			flag = (diffrence/4); //division output will be integer as flag type
			
			diffrence = diffrence - 4*flag;
			
			printf("\nfirst kangaroo must increase speed to 4 steps untell diffrence ( %d ) ",diffrence);
			printf("then back to the original speed");
		}
		
		if (diffrence < 4 )
		{
			printf("\nfirst kangaroo's  speed sould be %d ",diffrence);
		}
		
	}
	
}