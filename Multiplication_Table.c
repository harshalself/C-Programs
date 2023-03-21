// NAME : HARSHAL PATIL 

#include<stdio.h>
int main()
{
	float i,j,n;

	printf("\n Enter Number : ");
	scanf("%f",&n);
	printf("\n Last Multiple : ");
	scanf("%f",&j);
	
	for(i=1;i<=j;i++)	
	{
		printf("\n %.1f * %.1f = %.1f",n,i,n*i);
	}
	return 0;	
}

/* Enter Number : 999

 Last Multiple : 10

 999.0 * 1.0 = 999.0
 999.0 * 2.0 = 1998.0
 999.0 * 3.0 = 2997.0
 999.0 * 4.0 = 3996.0
 999.0 * 5.0 = 4995.0
 999.0 * 6.0 = 5994.0
 999.0 * 7.0 = 6993.0
 999.0 * 8.0 = 7992.0
 999.0 * 9.0 = 8991.0
 999.0 * 10.0 = 9990.0*/
