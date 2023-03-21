// NAME : HARSHAL PATIL

#include<stdio.h>
int main()
{
	float c,f;
	
	printf("\n Enter Temperature in CELCIUS : ");
	scanf("%f",&c);
	
	f=(1.8*c)+32;	
	
	printf("\n Temperature in FARENHEIT is : %f",f);
	
	printf("\n Enter Temperature in FARENHEIT : ");
	scanf("%f",&f);
	
	c=0.56*(f-32);	
	
	printf("\n Temperature in CELCIUS is : %f",c);
	
	
	return 0;

}

/* Enter Temperature in CELCIUS : 50

 Temperature in FARENHEIT is : 122.000000
 Enter Temperature in FARENHEIT : 100

 Temperature in CELCIUS is : 38.080002*/
