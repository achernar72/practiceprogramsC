#include<stdio.h>
#include<conio.h>

void function1();
void function2();
int main()
{
	printf("begining main function\n");
	printf("calling function1\n");
	 function1();
	printf("returning from function1 to the main function\n");
	printf("finishing the main function\n");
	getch();
	return 0;
}

void function1()
{
	
	printf("begining  function1\n");
	printf("calling function2\n");
 function2();
		printf("returning from function2 to the function1\n");
	printf("finishing the function1\n");
}

void function2()
{
	
	printf("begining  function2\n");
	printf("finishing the function1\n");
}
