#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input;
	
	printf("input an integer:");
	scanf("%d", &input);
	
	if (input > 0)
		printf("����Դϴ�.\n");
	else if (input < 0)
		printf("�����Դϴ�. \n");
	else
		printf("0�Դϴ�.\n");
	system("PAUSE");		
	return 0;
}