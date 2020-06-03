#include <stdio.h>											
#include <stdlib.h>											// 랜덤함수를 만들기 위한 표준 라이브러리

int main() {
	int player, computer, sum = 0;							// player - 사용자, computer - 컴퓨터, sum - 승리 횟수 계산
	while (1) {
		printf("\n-----------------------------\n\n");
		printf("1. 가위  2. 바위  3. 보  4. 종료\n\n");
		printf("-----------------------------\n\n");
		computer = rand() % 3 + 1;							// 컴퓨터는 1(가위), 2(바위), 3(보)중에서 하나의 난수 생성
		scanf("%d", &player);
		if (player == 1) {									// 사용자가 1(가위)를 냈을 때
			if (computer == 1) {
				printf("가위 vs 가위 // [비겼습니다]\n");
			}
			else if (computer == 2) {
				printf("가위 vs 바위 // [졌습니다]\n");
			}
			else if (computer == 3) {
				printf("가위 vs 보 // [이겼습니다]\n");
				sum += 1;									// 승리 횟수 값에 1을 더함
				printf("%d승 중 !!\n", sum);
			}
		}
		else if (player == 2) {								// 사용자가 2(바위)를 냈을 때
			if (computer == 1) {
				printf("바위 vs 가위 // [이겼습니다]\n");
				sum += 1;									// 승리 횟수 값에 1을 더함
				printf("%d승 중 !!\n", sum);
			}
			else if (computer == 2) {
				printf("바위 vs 바위 // [비겼습니다]\n");
			}
			else if (computer == 3) {
				printf("바위 vs 보 // [졌습니다]\n");
			}
		}
		else if (player == 3) {								// 사용자가 3(보)를 냈을 때
			if (computer == 1) {
				printf("보 vs 가위 // [졌습니다]\n");
			}
			else if (computer == 2) {
				printf("보 vs 바위 // [이겼습니다]\n");
				sum += 1;									// 승리 횟수 값에 1을 더함
				printf("%d승 중 !!\n", sum);
			}
			else if (computer == 3) {
				printf("보 vs 보 // [비겼습니다]\n");
			}
		}
		else if (player == 4) {								// 사용자가 4(종료)를 원하는 경우
			printf("%d회 이겼습니다 !!", sum);				// 이겼던 횟수 출력
			printf("\n\n-----------------------------\n");
			return  0;										// 종료
		}
		else {												// 사용자가 이 외의 값(default 값)을 입력했을 때
			printf("다시 입력하세요\n");
		}
	}
}