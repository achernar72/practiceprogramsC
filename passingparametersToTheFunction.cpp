#include<stdio.h>
#include<conio.h>

int add (int a,int b);


int main ()

{
	int a ,b;
	printf("enter numbers\n");
	scanf("%d %d",&a,&b);
int resu=add(a,b);
	
	printf("the answer is%d", resu);
	
getch();
return 0;	
}

int add(int a,int b){
int result = a+b;

if(result>20){
	return 0;
}
else
{

return result;
}
}            
