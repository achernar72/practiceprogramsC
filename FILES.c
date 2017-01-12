#include<stdio.h>
#include<conio.h>


int main ()
{
FILE *fpointer;
fpointer = fopen("ghost.txt","w");	
	
	if(fpointer == NULL){
		
		
		printf("file cannot open\n");
		
	}
	else{
	
	printf("file opened sucessfully\n");

	
	fclose(fpointer);
}
	getch();
	return 0;
}
