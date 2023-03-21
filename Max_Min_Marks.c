// NAME : HARSHAL PATIL 

#include<stdio.h>
int main()
{
	int n,i,max,min=100;
	
	printf("\n ENTER OF NUMBER STUDENTS : ");
	scanf("%d",&n);
	
	int a[n],c=0,sum=0,avg;
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter Marks of Student %d : ",i+1);
		scanf("%d",&a[i]);
		max=a[0];
		
		
		if(a[i]>40)
		{
			c++;
		}
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
		sum=sum+a[i];
		
	}
	avg=sum/n;
	printf("\n MAXIMUM MARKS IS %d",max);
	printf("\n MINIMUM MARKS IS %d",min);
	printf("\n TOTAL MARKS IS %d",sum);
	printf("\n AVERAGE MARKS IS %d",avg);
	printf("\n NO OF PASS  STUDENTS IS %d",c);
	
	return 0;	
}

/* ENTER OF NUMBER STUDENTS : 3

 Enter Marks of Student 1 : 70

 Enter Marks of Student 2 : 80

 Enter Marks of Student 3 : 90

 MAXIMUM MARKS IS 90
 MINIMUM MARKS IS 70
 TOTAL MARKS IS 240
 AVERAGE MARKS IS 80
 NO OF PASS  STUDENTS IS 3*/
