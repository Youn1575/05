#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
    char c;
    int num = 0; // 0으로 초기화

    printf("input a string: ");

    while ((c = getchar()) != '\n') {
        if (c >= '0' && c <= '9') {
            num = num + 1;
        }
    }

    printf("the number of digits is %i\n", num);
    system("PAUSE");

    return 0;
}
