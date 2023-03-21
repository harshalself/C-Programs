// NAME : HARSHAL PATIL 

#include<stdio.h>
int main()
{
	int n,i;
	
	printf("\n ENTER NUMBER OF ELEMENTS : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter %d Element : ",i+1);
		scanf("%d",&a[i]);
		
	}
	printf("\n Even NO is : ");
	for(i=0;i<n;i++)
	{
	if(a[i]%2==0)
		{
			printf(" %d",a[i]);	
		}
		
	}
	printf("\n Odd No is : ");
	for(i=0;i<n;i++)
	{
	
	if(a[i]%2==1)
		{
			printf(" %d",a[i]);	
		}
	
	}
	
	return 0;	
}

/* ENTER NUMBER OF ELEMENTS : 5

 Enter 1 Element : 12

 Enter 2 Element : 34

 Enter 3 Element : 56

 Enter 4 Element : 45 

 Enter 5 Element : 77

 Even NO is :  12 34 56
 Odd No is :  45 77*/