#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int answer = 59; // 정답 숫자
    int guess;       // 사용자가 추측한 숫자
    int counts = 0; // 시도 횟수 초기화

    do {
        printf("Guess a number : ");
        scanf("%d", &guess);
        counts++; // 시도 횟수 증가

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

