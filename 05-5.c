#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int num1, num2, result;
    char operator;

    // 사용자로부터 입력 받음
    printf("계산식을 입력하세요: ");
    scanf("%d %c %d", &num1, &operator, &num2);

    // 입력된 연산자에 따라 계산
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("0으로 나눌 수 없습니다.\n");
                return 1; // 오류 코드 반환
            }
            break;
        default:
            printf("지원하지 않는 연산자 입니다. \n");
            return 1; // 오류 코드 반환
    }
 
    // 결과 출력
    printf("= %d\n", result);

    return 0;
}

