#include<stdio.h>
#include<conio.h>

#define MARKS 65


int main()
{
#if (MARKS >= 75)
	printf("your marks are greater than 75\n");
	printf("you have got grade A\n");
	
#elif (MARKS >= 50)
	printf("your marks are greater than 50\n");
	printf("you have got grade B\n");
	
#else
	printf("your marks are low\n");
	printf("you have got grade f\n");
	
#endif

	return 0;
}
