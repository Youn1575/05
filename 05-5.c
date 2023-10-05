#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int num1, num2, result;
    char operator;

    // ����ڷκ��� �Է� ����
    printf("������ �Է��ϼ���: ");
    scanf("%d %c %d", &num1, &operator, &num2);

    // �Էµ� �����ڿ� ���� ���
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
                printf("0���� ���� �� �����ϴ�.\n");
                return 1; // ���� �ڵ� ��ȯ
            }
            break;
        default:
            printf("�������� �ʴ� ������ �Դϴ�. \n");
            return 1; // ���� �ڵ� ��ȯ
    }
 
    // ��� ���
    printf("= %d\n", result);

    return 0;
}

