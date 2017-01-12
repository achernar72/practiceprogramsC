# include<stdio.h>
#include<conio.h>
int main()
{
	int age;
	float weight;
	
	printf("Enter your age and weight :");
	scanf("%d%f", &age,&weight);
	printf("Your age is %d \n your weight is %f", age, weight);
	getch();
	return 0;
}
