// NAME : HARSHAL PATIL

#include<stdio.h>
int prime();
int main()
{
	int n;
	
	printf("\n Enter Number : ");
	scanf("%d",&n);
	
	prime(n);
	
	return 0;
}
int prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
		printf("\n Number is not Prime ");
		return 0;
		}
	}
	
	printf("\n Number is Prime ");
	
}	

/* Enter Number : 89

 Number is Prime*/
