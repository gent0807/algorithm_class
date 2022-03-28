#include <stdio.h>

void main() {
	int x, nega=0;
	for (int i = 0; i < 30; i++) {
		printf("정수를 입력하세요.\n");
		scanf_s("%d", &x);
		if (x < 0) {
			nega += 1;
		}
	}
	printf("입력한 정수 중 음수의 개수는 %d입니다.\n", nega);
}