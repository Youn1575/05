#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int answer = 59; // ���� ����
    int guess;       // ����ڰ� ������ ����
    int counts = 0; // �õ� Ƚ�� �ʱ�ȭ

    do {
        printf("Guess a number : ");
        scanf("%d", &guess);
        counts++; // �õ� Ƚ�� ����

        if (guess < answer) {
            printf("low!\n");
        } else if (guess > answer) {
            printf("high!\n");
        } else {
            printf("Congratulation!\n");
            printf("trials : %d\n", counts);
        }
    } while (guess != answer);

    return 0;
}

