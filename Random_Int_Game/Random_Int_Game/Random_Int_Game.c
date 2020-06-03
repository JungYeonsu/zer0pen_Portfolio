#include <stdio.h>											
#include <stdlib.h>															// 랜덤함수를 만들기 위한 표준 라이브러리

int main() {
	int random, guess, quit;												// random : 1~100 사이의 난수 / guess : 사용자가 입력할 값 / quit : 종료버튼
	random = rand() % 100 + 1;												// 모든 난수에서 나올 수 있는 나머지 값은 0~99 이므로 1을 더하여 범위를 1~100으로 지정
	printf("1 ~ 100 사이에 어떤 수가 생성되었습니다 !!\n");
	printf("이 수를 맞혀보세요 !!\n");
	while (1) {
		scanf("%d", &guess);												// 사용자가 예측한 값 guess를 입력받음
		if (guess > random) {												// random 값보다 guess가 더 클 경우 (오답)
			printf("DOWN ↓\n");
		}
		else if (guess < random) {											// random 값보다 guess가 더 작을 경우 (오답)
			printf("UP ↑\n");
		}
		else if (guess = random) {											// random 값보다 guess가 일치할 경우 (정답)
			printf("정답입니다 !!\n");
			printf("정답은 %d입니다\n", random);
			printf("종료하려면 1을 누르고 계속 할 경우 아무키나 누르세요 ");
			scanf("%d", &quit);			
			if (quit == 1) {												// 1(종료)일 경우
				return 0;
			}
			else {
				random = rand() % 100 + 1;									// 계속 할 경우
				printf("1 ~ 100 사이에 어떤 수가 생성되었습니다 !!\n");		// 새로운 변수 지정 (재시작)
				printf("이 수를 맞혀보세요 !!\n");
			}
		}
	}


}