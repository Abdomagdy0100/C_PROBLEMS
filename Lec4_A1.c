# include <stdio.h>
//Lecture function assignment 1

//decleration of global variables
int b=0;
int c=0;
int d=0;
int a=0;
//entering the 4 numbers
void numbers()
{
	int num[4];
	int i;
	int val;
	
	for(i=1;i<=4;i++)
	{
		printf("plese enter number (%d) : ",i);
		scanf("%d",& num[i]);
		a=num[1];
		b=num[2];
		c=num[3];
		d=num[4];
	}
}
//get the max
void max()
{
	if(a>b && a>c && a>d )
		printf("\nmax value is %d",a);
	else if(b>a && b>c && b>d)
		printf("\nmax value is %d",b);
	else if(c>a && c>b && c>d)
		printf("\nmax value is %d",c);
	else
	    printf("\nmax value is %d",d);
}
//get the mini
void mini()
{
	if(a<b && a<c && a<d )
		printf("\nmini value is %d",a);
	else if(b<a && b<c && b<d)
		printf("\nmini value is %d",b);
	else if(c<a && c<b && c<d)
		printf("\nmini value is %d",c);
	else
	    printf("\nmini value is %d",d);
}

void main()
{
	numbers();
	max();
	mini();
}
