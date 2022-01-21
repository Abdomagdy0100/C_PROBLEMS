#include<stdio.h>

void main()
{
	float p=0, p1=0, cost=0, cost1=0;
	
	for(p=0;p<10;p=p+0.1)
	{
		cost=40-8*p + p*p;//calculat cost for p=0 [start]
		if(p==0)
		{
			cost1=cost;//cost1=40
		}
		
		if(cost<=cost1)//any other value of cost smaller than 40
		{
			cost1=0;
			cost1=cost;
			p1=p;
			continue;
		}
	}
	printf("\nminimum cost is = %f  AT %.1f",cost1,p1);
}

