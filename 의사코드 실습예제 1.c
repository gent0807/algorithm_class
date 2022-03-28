#include <stdio.h>

void main() {
	int a, b, sum, sub, mult;
	double div;

	printf("두 개의 정수를 입력하세요.\n");
	scanf_s("%d %d", &a, &b);

	sum = a + b;
	sub = a - b;
	mult = a * b;
	div = (double)a / b;

	printf("두 정수의 합은 %d, 두 정수를 뺀 값은 %d입니다.\n", sum, sub);
	printf("두 정수의 곱은 %d, 두 정수를 나눈 값은 %.2f입니다.", mult, div);
}