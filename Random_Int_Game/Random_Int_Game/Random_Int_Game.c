#include <stdio.h>											
#include <stdlib.h>															// �����Լ��� ����� ���� ǥ�� ���̺귯��

int main() {
	int random, guess, quit;												// random : 1~100 ������ ���� / guess : ����ڰ� �Է��� �� / quit : �����ư
	random = rand() % 100 + 1;												// ��� �������� ���� �� �ִ� ������ ���� 0~99 �̹Ƿ� 1�� ���Ͽ� ������ 1~100���� ����
	printf("1 ~ 100 ���̿� � ���� �����Ǿ����ϴ� !!\n");
	printf("�� ���� ���������� !!\n");
	while (1) {
		scanf("%d", &guess);												// ����ڰ� ������ �� guess�� �Է¹���
		if (guess > random) {												// random ������ guess�� �� Ŭ ��� (����)
			printf("DOWN ��\n");
		}
		else if (guess < random) {											// random ������ guess�� �� ���� ��� (����)
			printf("UP ��\n");
		}
		else if (guess = random) {											// random ������ guess�� ��ġ�� ��� (����)
			printf("�����Դϴ� !!\n");
			printf("������ %d�Դϴ�\n", random);
			printf("�����Ϸ��� 1�� ������ ��� �� ��� �ƹ�Ű�� �������� ");
			scanf("%d", &quit);			
			if (quit == 1) {												// 1(����)�� ���
				return 0;
			}
			else {
				random = rand() % 100 + 1;									// ��� �� ���
				printf("1 ~ 100 ���̿� � ���� �����Ǿ����ϴ� !!\n");		// ���ο� ���� ���� (�����)
				printf("�� ���� ���������� !!\n");
			}
		}
	}


}