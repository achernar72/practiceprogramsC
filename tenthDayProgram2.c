#include<stdio.h>
#include<conio.h>


void display(int mark[], int size);

int main(){
	int mark[4]={10,20,30,40};
	
	display(mark,4);
	getch();
	return 0;
	
}

void display(int mark[],int size){
int i;
	for(i=0;i<=size;i++)

	{
	
	printf("the mark %d is %d\n",i,mark[i]);
}
}
