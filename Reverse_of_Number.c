// NAME : HARSHAL PATIL 

#include<stdio.h>
int main()
{
	int n,num,rev=0,dig;
	
	printf("\n ENTER NUMBER : ");
	scanf("%d",&num);
	n=num;
	while(num!=0)
	{
		dig=num%10;
		rev=rev*10+dig;
		num=num/10;

	} 
	printf("\n REVERSE OF %d IS %d ",n,rev);
	
	return 0;	
}


/*  ENTER NUMBER : 678

 REVERSE OF 678 IS 876 */
