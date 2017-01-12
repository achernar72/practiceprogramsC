#include<stdio.h>
#include<conio.h>

int add(int *a, int *b);
int main(){
	
	int x=100;
	int y=200;
	int total=add(&x,&y);
	printf("the addition of %d and %d is %d\n",x,y,total);
	getch();
	return 0;
	
}

int add(int *a, int *b)
{
int result= *a+*b;
return result;
	
	
}

