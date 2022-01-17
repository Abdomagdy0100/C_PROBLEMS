#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
Problem geeks for geeks 
array for n values ---> read values ---> calculate sumation ---> print sum 
---> ((( free memory from entered values )))

the only way to free the memory from it's enterd values is use (malloc) which 
mainly used with pointers so need to use pointer as array insted of real array

*/

/*

// this first code uses the array 
void main() 
{

 //-- _________ Enter your code here. Read input from STDIN. Print output to STDOUT______________-- 
 
    int arr[15],i,STDIN, STDOUT=0;
	
    printf("plese enter the number of values yo want to enter (max = 10):  ");
    scanf("%d",&STDIN);
    
    for(i=1; i<=STDIN ; i++)
    {
        printf("\nenter the %d value :",i);
        scanf("%d",&arr[i]);
		 STDOUT= STDOUT+arr[i];
    }  
	printf("\nthe summation is : %d", STDOUT);
}
*/

int main() 
{
 //-- _________ Enter your code here. Read input from STDIN. Print output to STDOUT______________-- 
 
    int *ptr,i,STDIN, STDOUT=0;
	
    printf("plese enter the number of values yo want to enter (max = 10):  ");
    scanf("%d",&STDIN);
	
	ptr=(int*)malloc(sizeof(int)*STDIN); //here the address will back to garbage after make the mission
    
    for(i=1; i<=STDIN ; i++)
    {
        printf("\nenter the %d value :",i);
        scanf("%d",&ptr[i]);
		STDOUT= STDOUT+ptr[i];
    }  
	printf("\nthe summation is : %d", STDOUT);
	
	return 0;
}