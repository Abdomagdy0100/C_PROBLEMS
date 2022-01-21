#include<stdio.h>
//Lecture function assignment 2

int a=0;//global operand 1
int b=0;//global operand 2
int id=0;
int y;
void add()
{
	printf("\nadd\n ");
	printf("enter A : ");
	scanf("%d",&a);
	printf("enter B : ");
	scanf("%d",&b);
	y=a+b;
	printf("sum = %d",y);
}
void subtraction()
{
	printf("\nsubtraction\n ");
	printf("enter A : ");
	scanf("%d",&a);
	printf("enter B : ");
	scanf("%d",&b);
	y=a-b;
	printf("sub = %d",y);
}
void multiply()
{
	printf("enter A : ");
	scanf("%d",&a);
	printf("enter B : ");
	scanf("%d",&b);
	y=a*b;
	printf("multiplication = %d",y);
}
void divide()
{
	float z;
	printf("\ndivision\n ");
	printf("enter A : ");
	scanf("%d",&a);
	printf("\tenter B : ");
	scanf("%d",&b);
	z=(float)a/b;
	printf("A/B = %f",z);
}
void and()
{
	printf("\nanding\n ");
	printf("enter A : ");
	scanf("%d",&a);
	printf("enter B : ");
	scanf("%d",&b);
	y=a&b;
	printf("anding between A and B = %d",y);
}
void or()
{
	printf("\noring\n ");
	printf("enter A : ");
	scanf("%d",&a);
	printf("enter B : ");
	scanf("%d",&b);
	y=a|b;
	printf("oring between A and B = %d",y);
}
void not()
{
	printf("\nnot\n ");
	printf("enter A : ");
	scanf("%d",&a);
	y=~a;
	printf("not (A) = %d",y);
}
void xor()
{
	printf("\nxoring\n ");
	printf("enter A : ");
	scanf("%d",&a);
	printf("enter B : ");
	scanf("%d",&b);
	y=a^b;
	printf("X oring between A and B = %d",y);
}
void reminder()
{
	printf("\nreminder\n ");
	printf("enter A : ");
	scanf("%d",&a);
	printf("enter B : ");
	scanf("%d",&b);
	y=a%b;
	printf("reminder A and B  = %d",y);
}
void increment()
{
	printf("\nincrement\n ");
	printf("enter A : ");
	scanf("%d",&a);
	y=a++;
	printf("increment of A  = %d",y);
}
void decrement()
{
	printf("\ndecrement\n ");
	printf("enter A : ");
	scanf("%d",&a);
	y=a--;
	printf("decrement of A = %d",y);
}

void main()
{
	int q=1;
	do{
	printf("\nplese enter the operation id : ");
	scanf("%d",&id);
	
	if (id==1)
	{
		add();
	}
	else if (id==2)
	{
		subtraction();
	}
	else if (id==3)
	{
		multiply();
	}
	else if (id==4)
	{
		divide();
	}
	else if (id==5)
	{
		and();
	}
	else if (id==6)
	{
		void or();
	}
	else if (id==7)
	{
		void not();
	}
	else if (id==8)
	{
		void xor();
	}
	else if (id==9)
	{
		void reminder();
	}
	else if (id==10)
	{
		void increment();
	}
	else if (id==11)
	{
		void decrement();
	}	
	else
	{
		printf("plese re enter the id !!");
	}
	}while(q=1);
}