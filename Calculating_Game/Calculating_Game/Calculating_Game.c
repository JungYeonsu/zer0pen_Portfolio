#include <stdio.h>
#include <stdlib.h>

int main() {
	int integer1, integer2, answer, score = 0;												// integer1/ 2�� �� ����, answer�� ������� �Է°�, score�� ����

	printf("---------------------------------------------------------------\n");
	printf("\n���ݺ��� 1 ~ 100 ������ �� ������ ���ð̴ϴ�\n���� ���纸���� !!\n\n");
	printf("---------------------------------------------------------------\n\n");
	while (1) {
		integer1 = rand() % 100 + 1;														// ù��° ���� �� ����
		integer2 = rand() % 100 + 1;														// �ι�° ���� �� ����
		printf("%d�ܰ� : %d + %d = ?\n", score+1, integer1, integer2);
		scanf("%d", &answer);
		if (answer == integer1 + integer2) {												// ������(�Է� ���� �� ���� ���� ��ġ��) ���
			printf("�����Դϴ�! ���� �ܰ�� ���ϴ� !!\n\n");
			printf("---------------------------------------------------------------\n\n");
			score++;																		// score ������ 1 �߰�
		}
		else {																		
			printf("Ʋ�Ƚ��ϴ�. ������ �ٽ� �õ��غ�����!\n���� ���� : %d��\n\n", score);	
			printf("---------------------------------------------------------------\n\n");
			return 0;																		// ���α׷� ����
		}

		integer1 = rand() % 100 + 1;														// ù��° ���� �� ����
		integer2 = rand() % 100 + 1;														// �ι�° ���� �� ����
		printf("%d�ܰ� : %d - %d = ?\n", score+1, integer1, integer2);
		scanf("%d", &answer);
		if (answer == integer1 - integer2) {												// ������(�Է� ���� �� ���� ���� ��ġ��) ���
			printf("�����Դϴ�! ���� �ܰ�� ���ϴ� !!\n\n");
			printf("---------------------------------------------------------------\n\n");
			score++;																		// score ������ 1 �߰�
		}
		else {
			printf("Ʋ�Ƚ��ϴ�. ������ �ٽ� �õ��غ�����!\n���� ���� : %d��\n\n", score);
			printf("---------------------------------------------------------------\n\n");
			return 0;																		// ���α׷� ����
		}

		integer1 = rand() % 100 + 1;														// ù��° ���� �� ����
		integer2 = rand() % 100 + 1;														// �ι�° ���� �� ����
		printf("%d�ܰ� : %d * %d = ?\n", score+1, integer1, integer2);
		scanf("%d", &answer);
		if (answer == integer1 * integer2) {												// ������(�Է� ���� �� ���� ���� ��ġ��) ���
			printf("�����Դϴ�! ���� �ܰ�� ���ϴ� !!\n\n");
			printf("---------------------------------------------------------------\n\n");
			score++;																		// score ������ 1 �߰�
		}
		else {
			printf("Ʋ�Ƚ��ϴ�. ������ �ٽ� �õ��غ�����!\n���� ���� : %d��\n\n", score);
			printf("---------------------------------------------------------------\n\n");
			return 0;																		// ���α׷� ����
		}

		integer1 = rand() % 100 + 1;														// ù��° ���� �� ����
		integer2 = rand() % 100 + 1;														// �ι�° ���� �� ����
		printf("%d�ܰ� : %d / %d = ?\n", score+1, integer1, integer2);
		scanf("%d", &answer);
		if (answer == integer1 / integer2) {												// ������(�Է� ���� �� ���� ���� ��ġ��) ���
			printf("�����Դϴ�! ���� �ܰ�� ���ϴ� !!\n\n");
			printf("---------------------------------------------------------------\n\n");
			score++;																		// score ������ 1 �߰�
		}
		else {
			printf("Ʋ�Ƚ��ϴ�. ������ �ٽ� �õ��غ�����!\n���� ���� : %d��\n\n", score);
			printf("---------------------------------------------------------------\n\n");
			return 0;																		// ���α׷� ����
		}
	}
}