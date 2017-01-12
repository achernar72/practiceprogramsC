#include<stdio.h>
#include<conio.h>

int display(int a , int b);

int main()

{
	int a =10;
	int b =20;
   int temp=display(a,b);
   printf("the sum of %dand %d is %d",a,b,temp);
	
	getch();
	return 0;
	
}

int display(int a, int b){
	
	
	
int result=a+b;

return result;
}
