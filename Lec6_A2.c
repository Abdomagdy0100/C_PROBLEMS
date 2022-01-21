#include<stdio.h>

void main()
{
	int x=3;
	int y=4;
	int z=7;
	int*p=&x;
	int*q=&y;
	int*r=&z;
	printf("1 : %d  ,%d  ,%d  ,%d  ,%d  ,%d  ,%d  ,%d  ,%d ",x, y, z, p, q, r, *p, *q, *r);
	printf("after swapping");
	r=p;//assign r address to p--*r=3
	p=q;//assign p address to q--*p=4
	q=r;//assign q address to r--*q=3
	//the out should be 3,4,7,--,--,--,4,3,3
    printf("\n2 : %d  ,%d  ,%d  ,%d  ,%d  ,%d  ,%d  ,%d  ,%d ",x, y, z, p, q, r, *p, *q, *r);
}