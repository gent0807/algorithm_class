#include <stdio.h>

int gcd(int x, int y);

void main() {
	int result;
	int a, b, cond = 1;

	while (cond)
	{
		printf("최대공약수를 구할 두 수를 입력하세요.\n");
		scanf_s("%d %d", &a, &b);
		result = gcd(a, b);
		printf("gcd(%d, %d)=%d.\n", a, b, result);
		printf("계속하실래요?(1/0)\n");
		scanf_s("%d", &cond);
	}
	printf("종료되었습니다.");
}


int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else
		return gcd(y, x % y);
}