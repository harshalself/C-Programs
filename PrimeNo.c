// NAME : HARSHAL PATIL

#include<stdio.h>
int main()
{
	int n,i;
	
	printf("\n Enter Number : ");
	scanf("%d",&n);
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
		printf("\n Number is not Prime ");
		return 0;
		}
	}
	
	printf("\n Number is Prime ");
	
	return 0;
}

/* Enter Number : 5

 Number is Prime*/ 

 