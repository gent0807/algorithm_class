#include <stdio.h>

void main() {
	int sum = 0;
	for (int i = 1; i < 11; i++) {
		sum += i * i;
	}
	printf("1부터 10까지의 정수들의 제곱값들의 합은 %d입니다.\n", sum);
}