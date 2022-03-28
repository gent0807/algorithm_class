#include <stdio.h>

void main() {
	int mult = 1;
	int x, y;

	printf("두 개의 정수를 입력하세요.\n");
	scanf_s("%d %d", &x, &y);
	while (y > 0) {
		mult *= x;
		y = y-1;
	}
	printf("두 수중 첫번째 수를 두 번째 수만큼 제곱한 값은 %d입니다.\n", mult);
}