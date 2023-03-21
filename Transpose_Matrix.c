// NAME : HARSHAL PATIL

#include<stdio.h>
int main()
{
	int a[10][10],i,j;
	
	printf("\n Enter Matrix :  \n ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter Element %d%d : ",i+1,j+1);		
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n Entered Matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);	
		}
		printf("\n");
	}		
	printf("\n Transpose of Given Matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[j][i]);	
		}
		printf("\n");
	}

return 0;
}

/* Enter Matrix :

 Enter Element 11 : 1

 Enter Element 12 : 2

 Enter Element 13 : 3


 Enter Element 21 : 4

 Enter Element 22 : 5

 Enter Element 23 : 6


 Enter Element 31 : 7

 Enter Element 32 : 8

 Enter Element 33 : 9


 Entered Matrix is :
1       2       3
4       5       6
7       8       9

 Transpose of Given Matrix is :
1       4       7
2       5       8
3       6       9*/
