#include<stdio.h>
#include<conio.h>

void display(int *p,int *q);
int main(){

int x=100;
int y=200;
	printf("before calling function %d \t%d\n",x,y);
	
display(&x,&y);	
printf("after calling function %d\t%d\n",x,y);
getch();
return 0;	
}
void display(int *p,int *q){
	
	printf("calling function %d \t%d\n",*p,*q);
	*p=10;
	*q=1;
}
