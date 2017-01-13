#include<stdio.h>
#include<conio.h>
int main(){
	FILE *Fp;
	char data[25] = "by Avinash has something in him that people cant do ";
	int L=strlen(data);
	int counter;
	Fp=fopen("message.txt","a");
		
		
	if(Fp==NULL)
	{
		printf("the file cant be opened");
	
}
		else{
			for(counter=0;counter<=L;counter++){
			printf("in the file the characters are written as %c\n",data[counter]);
				fputc(data[counter],Fp);
			}
		printf("the file written sucessfully");
		
	}fclose(Fp);
	getch();
	return 0;
}
