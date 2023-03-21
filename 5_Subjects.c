// NAME : HARSHAL PATIL 

#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	float m1,fee,chem,c,cs,total,roll,per;
	
	printf("\n Enter Name of Student : ");
	scanf("%s",name);
	printf("\n Enter Roll No : ");
	scanf("%f",&roll);
	printf("\n Enter Marks of M1 : ");
	scanf("%f",&m1);
	printf("\n Enter Marks of FEE : ");
	scanf("%f",&fee);
	printf("\n Enter Marks of CHEMISTRY : ");
	scanf("%f",&chem);
	printf("\n Enter Marks of C PROG : ");
	scanf("%f",&c);
	printf("\n Enter Marks of CS: ");
	scanf("%f",&cs);
	
	total=m1+fee+chem+c+cs;
	per=total*100/500;
	
	printf("\n NAME 	\t\t: %s",name);
	printf("\n ROLL NO 	\t: %f",roll);
	printf("\n TOTAL MARKS          \t: %f",total);
	printf("\n PERCENTAGE 	\t: %f",per);
	printf("\n AVERAGE 	\t: %f",per);
	return 0;	
}


/* Enter Name of Student : Harshal

 Enter Roll No : 37

 Enter Marks of M1 : 80

 Enter Marks of FEE : 70

 Enter Marks of CHEMISTRY : 90

 Enter Marks of C PROG : 95

 Enter Marks of CS: 75

 NAME                   : Harshal
 ROLL NO                : 37.000000
 TOTAL MARKS            : 410.000000
 PERCENTAGE             : 82.000000
 AVERAGE                : 82.000000*/


