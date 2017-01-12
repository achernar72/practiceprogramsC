#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void display(int a[],int n);
int main()
{

	int n;
	printf("Enter The Size:\n");
	scanf("%d",&n);
	int i;
	int a[i];
	for(i=0;i<n;i++){
		printf("Enter The Marks of subject %d\n",i);
		scanf("%d",&a[i]);
	
}
           display(a,n);
		getch();
		return 0;
	
}

void display(int a[],int n){
	int i;
	int total=0;
for(i=0;i<n;i++){
total=total+a[i];

}
		printf("%d",total);	
	
}
