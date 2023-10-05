#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum = 0;
	int num;
	int i;
	
	printf("input a number:");
	scanf("%d", &num);
	
	for (i=0; i<= num; i++)
	{	
		sum = sum + i;	
	}
	
	printf("The result is %i\n", sum);
	system("PAUSE");
	return 0;
}
