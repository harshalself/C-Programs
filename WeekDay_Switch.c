// NAME : HARSHAL PATIL 

#include<stdio.h>
int main()
{
	int n;
	
	printf("\n ENTER DAY NUMBER : ");
	scanf("%d",&n);
	
	switch(n)
	{
	case 1:
		printf("\n Day is Sunday");
		break;
	case 2:
		printf("\n Day is Monday");
		break;
	case 3:
		printf("\n Day is Tuesday");
		break;
	case 4:
		printf("\n Day is Wednesday");
		break;
	case 5:
		printf("\n Day is Thursday");
		break;
	case 6:
		printf("\n Day is Friday");
		break;
	case 7:
		printf("\n Day is Saturday");
		break;
	default : 
		printf("\n Invalid Date"); 
		break;	
	}
	return 0;	
}

/* ENTER DAY NUMBER : 1

 Day is Sundaypl2@pl2-HP-280-Pro-G6-Microtower-PC:~/FE-B2-37$ ./a.out

 ENTER DAY NUMBER : 2

 Day is Mondaypl2@pl2-HP-280-Pro-G6-Microtower-PC:~/FE-B2-37$ ./a.out

 ENTER DAY NUMBER : 3

 Day is Tuesdaypl2@pl2-HP-280-Pro-G6-Microtower-PC:~/FE-B2-37$ ./a.out

 ENTER DAY NUMBER : 4

 Day is Wednesdaypl2@pl2-HP-280-Pro-G6-Microtower-PC:~/FE-B2-37$ ./a.out

 ENTER DAY NUMBER : 5

 Day is Thursdaypl2@pl2-HP-280-Pro-G6-Microtower-PC:~/FE-B2-37$ ./a.out

 ENTER DAY NUMBER : 6

 Day is Fridaypl2@pl2-HP-280-Pro-G6-Microtower-PC:~/FE-B2-37$ ./a.out

 ENTER DAY NUMBER : 7

 Day is Saturdaypl2@pl2-HP-280-Pro-G6-Microtower-PC:~/FE-B2-37$ ./a.out

 ENTER DAY NUMBER : 8

 Invalid Date */



