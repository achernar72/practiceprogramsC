#include<stdio.h>
#include<conio.h>
#define CHECK(number)  if(number <=10){\
						printf("the number is less than 10");\}else{\
						printf("the number is greater than 10");\
						}
int main(){
	CHECK(15);
	getch();
	return 0;
}
