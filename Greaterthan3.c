// NAME : HARSHAL PATIL 

#include<stdio.h>
int main()
{
	int n1,n2,n3;
	
	printf("\n ENTER FIRST NUMBER : ");
	scanf("%d",&n1);
	
	printf("\n ENTER SECOND NUMBER : ");
	scanf("%d",&n2);

	printf("\n ENTER THIRD NUMBER : ");
	scanf("%d",&n3);

	if(n1>n2 && n1>n3)
	{
		printf("\n %d is GREATER than %d and %d",n1,n2,n3);
	}
	else if(n2>n1 && n2>n3)
	{
		printf("\n %d is GREATER than %d and %d",n2,n1,n3);
	}
	else if(n3>n2 && n3>n1)
	{
		printf("\n %d is GREATER than %d and %d",n3,n2,n1);
	}
	else
	{
		printf("\n ");
	}
	 
	
	return 0;	
}

/* ENTER FIRST NUMBER : 50 

 ENTER SECOND NUMBER : 30

 ENTER THIRD NUMBER : 70

 70 is GREATER than 30 and 50*/


