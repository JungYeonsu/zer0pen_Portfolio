#include <stdio.h>											
#include <stdlib.h>											// �����Լ��� ����� ���� ǥ�� ���̺귯��

int main() {
	int player, computer, sum = 0;							// player - �����, computer - ��ǻ��, sum - �¸� Ƚ�� ���
	while (1) {
		printf("\n-----------------------------\n\n");
		printf("1. ����  2. ����  3. ��  4. ����\n\n");
		printf("-----------------------------\n\n");
		computer = rand() % 3 + 1;							// ��ǻ�ʹ� 1(����), 2(����), 3(��)�߿��� �ϳ��� ���� ����
		scanf("%d", &player);
		if (player == 1) {									// ����ڰ� 1(����)�� ���� ��
			if (computer == 1) {
				printf("���� vs ���� // [�����ϴ�]\n");
			}
			else if (computer == 2) {
				printf("���� vs ���� // [�����ϴ�]\n");
			}
			else if (computer == 3) {
				printf("���� vs �� // [�̰���ϴ�]\n");
				sum += 1;									// �¸� Ƚ�� ���� 1�� ����
				printf("%d�� �� !!\n", sum);
			}
		}
		else if (player == 2) {								// ����ڰ� 2(����)�� ���� ��
			if (computer == 1) {
				printf("���� vs ���� // [�̰���ϴ�]\n");
				sum += 1;									// �¸� Ƚ�� ���� 1�� ����
				printf("%d�� �� !!\n", sum);
			}
			else if (computer == 2) {
				printf("���� vs ���� // [�����ϴ�]\n");
			}
			else if (computer == 3) {
				printf("���� vs �� // [�����ϴ�]\n");
			}
		}
		else if (player == 3) {								// ����ڰ� 3(��)�� ���� ��
			if (computer == 1) {
				printf("�� vs ���� // [�����ϴ�]\n");
			}
			else if (computer == 2) {
				printf("�� vs ���� // [�̰���ϴ�]\n");
				sum += 1;									// �¸� Ƚ�� ���� 1�� ����
				printf("%d�� �� !!\n", sum);
			}
			else if (computer == 3) {
				printf("�� vs �� // [�����ϴ�]\n");
			}
		}
		else if (player == 4) {								// ����ڰ� 4(����)�� ���ϴ� ���
			printf("%dȸ �̰���ϴ� !!", sum);				// �̰�� Ƚ�� ���
			printf("\n\n-----------------------------\n");
			return  0;										// ����
		}
		else {												// ����ڰ� �� ���� ��(default ��)�� �Է����� ��
			printf("�ٽ� �Է��ϼ���\n");
		}
	}
}