# include <stdio.h>
 int a,b,c; 
 int i=0,j=0,z=0;
 
 void class1()
 {    //class 1
	  
	  int class1[9];
      float sum1;
	  float avg1;
	  int fail1=0;
	  int pass1=0;
 
   printf("class 1 grade : ");
   printf("\n");
   
   for(a=0;a<10;a++)
   {
	   do
	   {
		   printf("student - %d - grade : ",a);
		   scanf(" %d",&class1[a]);
		   
		   sum1 =class1[a]+sum1;
		   
		   if(class1[a]<50)
		   {
			   fail1++;
		   }
		   else if (class1[a]>50)
		   {
			   pass1++;
		   }
		   
		   
	   }while(class1[a]>100);
	  
   }
   
      //sorting from lowest grade to highest

 for(j=0;j<10-1;j++)//the sorting is done (size-1 )times 
	{
		for(i=0;i<10-j-1;i++)
		{
			if(class1[i]>class1[i+1])
			{
				z=class1[i+1];
				class1[i+1]=class1[i];
				class1[i]=z;
			}
		}
	}
	
   printf("\n");	
   printf("\n lowest grade class 1 : %d",class1[0]);
   printf("\n highest grade class 1  : %d",class1[9]);
   printf("\n average grades  of class 1  : %f",avg1=(sum1/10));
   printf("\n %d students passed ",pass1);
   printf("\n %d students failed ",fail1);
   
 }
 
 void class2()
 {    //class 2
	  
	  int class2[9];
      float sum2;
	  float avg2;
	  int fail2=0;
	  int pass2=0;
 
   printf("class 2 grades : ");
   printf("\n");
   
   for(b=0;b<10;b++)
   {
	   do
	   {
		   printf("student - %d - grade : ",b);
		   scanf(" %d",&class2[b]);
		   
		   sum2 =class2[b]+sum2;
		   
		   if(class2[b]<50)
		   {
			   fail2++;
		   }
		   else if (class2[b]>50)
		   {
			   pass2++;
		   }
		   
		   
	   }while(class2[b]>100);
	  
   }
   
      //sorting from lowest grade to highest

 for(j=0;j<10-1;j++)//the sorting is done (size-1 )times 
	{
		for(i=0;i<10-j-1;i++)
		{
			if(class2[i]>class2[i+1])
			{
				z=class2[i+1];
				class2[i+1]=class2[i];
				class2[i]=z;
			}
		}
	}
	
   printf("\n");	
   printf("\n lowest grade class 2 : %d",class2[0]);
   printf("\n highest grade class 2  : %d",class2[9]);
   printf("\n average grades  of class 2  : %f",avg2=(sum2/10));
   printf("\n %d students passed ",pass2);
   printf("\n %d students failed ",fail2);
   
 }
 
 void class3()
 {    //class 3
	  
	  int class3[9];
      float sum3;
	  float avg3;
	  int fail3=0;
	  int pass3=0;
 
   printf("class 3 grades : ");
   printf("\n");
   
   for(c=0;c<10;c++)
   {
	   do
	   {
		   printf("student - %d - grade : ",c);
		   scanf(" %d",&class3[c]);
		   
		   sum3 =class3[c]+sum3;
		   
		   if(class3[c]<50)
		   {
			   fail3++;
		   }
		   else if (class3[c]>50)
		   {
			   pass3++;
		   }
		   
		   
	   }while(class3[c]>100);
	  
   }
   
      //sorting from lowest grade to highest

 for(j=0;j<10-1;j++)//the sorting is done (size-1 )times 
	{
		for(i=0;i<10-j-1;i++)
		{
			if(class3[i]>class3[i+1])
			{
				z=class3[i+1];
				class3[i+1]=class3[i];
				class3[i]=z;
			}
		}
	}
	
   printf("\n");	
   printf("\n lowest grade class 3 : %d",class3[0]);
   printf("\n highest grade class 3  : %d",class3[9]);
   printf("\n average grades  of class 3  : %f",avg3=(sum3/10));
   printf("\n %d students passed ",pass3);
   printf("\n %d students failed ",fail3);
   
 }
 
void main()
{
	class1();
	printf("\n\n");
	class2();
   printf("\n\n");
	class3();
}
