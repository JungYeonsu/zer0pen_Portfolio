#include <stdio.h>
#include <stdlib.h>

int main() {
	int integer1, integer2, answer, score = 0;												// integer1/ 2는 두 정수, answer은 사용자의 입력값, score은 점수

	printf("---------------------------------------------------------------\n");
	printf("\n지금부터 1 ~ 100 사이의 두 정수가 나올겁니다\n답을 맞춰보세요 !!\n\n");
	printf("---------------------------------------------------------------\n\n");
	while (1) {
		integer1 = rand() % 100 + 1;														// 첫번째 랜덤 값 생성
		integer2 = rand() % 100 + 1;														// 두번째 랜덤 값 생성
		printf("%d단계 : %d + %d = ?\n", score+1, integer1, integer2);
		scanf("%d", &answer);
		if (answer == integer1 + integer2) {												// 정답일(입력 값과 두 수의 합이 일치함) 경우
			printf("정답입니다! 다음 단계로 갑니다 !!\n\n");
			printf("---------------------------------------------------------------\n\n");
			score++;																		// score 변수에 1 추가
		}
		else {																		
			printf("틀렸습니다. 다음에 다시 시도해보세요!\n최종 점수 : %d점\n\n", score);	
			printf("---------------------------------------------------------------\n\n");
			return 0;																		// 프로그램 종료
		}

		integer1 = rand() % 100 + 1;														// 첫번째 랜덤 값 생성
		integer2 = rand() % 100 + 1;														// 두번째 랜덤 값 생성
		printf("%d단계 : %d - %d = ?\n", score+1, integer1, integer2);
		scanf("%d", &answer);
		if (answer == integer1 - integer2) {												// 정답일(입력 값과 두 수의 차가 일치함) 경우
			printf("정답입니다! 다음 단계로 갑니다 !!\n\n");
			printf("---------------------------------------------------------------\n\n");
			score++;																		// score 변수에 1 추가
		}
		else {
			printf("틀렸습니다. 다음에 다시 시도해보세요!\n최종 점수 : %d점\n\n", score);
			printf("---------------------------------------------------------------\n\n");
			return 0;																		// 프로그램 종료
		}

		integer1 = rand() % 100 + 1;														// 첫번째 랜덤 값 생성
		integer2 = rand() % 100 + 1;														// 두번째 랜덤 값 생성
		printf("%d단계 : %d * %d = ?\n", score+1, integer1, integer2);
		scanf("%d", &answer);
		if (answer == integer1 * integer2) {												// 정답일(입력 값과 두 수의 곱이 일치함) 경우
			printf("정답입니다! 다음 단계로 갑니다 !!\n\n");
			printf("---------------------------------------------------------------\n\n");
			score++;																		// score 변수에 1 추가
		}
		else {
			printf("틀렸습니다. 다음에 다시 시도해보세요!\n최종 점수 : %d점\n\n", score);
			printf("---------------------------------------------------------------\n\n");
			return 0;																		// 프로그램 종료
		}

		integer1 = rand() % 100 + 1;														// 첫번째 랜덤 값 생성
		integer2 = rand() % 100 + 1;														// 두번째 랜덤 값 생성
		printf("%d단계 : %d / %d = ?\n", score+1, integer1, integer2);
		scanf("%d", &answer);
		if (answer == integer1 / integer2) {												// 정답일(입력 값과 두 수의 몫이 일치함) 경우
			printf("정답입니다! 다음 단계로 갑니다 !!\n\n");
			printf("---------------------------------------------------------------\n\n");
			score++;																		// score 변수에 1 추가
		}
		else {
			printf("틀렸습니다. 다음에 다시 시도해보세요!\n최종 점수 : %d점\n\n", score);
			printf("---------------------------------------------------------------\n\n");
			return 0;																		// 프로그램 종료
		}
	}
}