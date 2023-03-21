// NAME : HARSHAL PATIL 

#include<stdio.h>
int main()
{
	float n1,n2;
	
	printf("\n ENTER FIRST NUMBER : ");
	scanf("%f",&n1);
	
	printf("\n ENTER SECOND NUMBER : ");
	scanf("%f",&n2);
	
	(n1>n2) ? printf("\n %f is GREATER than %f",n1,n2) : printf("\n %f is GREATER than %f",n2,n1);
	
	return 0;	
}

/*ENTER FIRST NUMBER : 12

 ENTER SECOND NUMBER : 23

 23.000000 is GREATER than 12.000000 */

