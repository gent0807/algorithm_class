#include <stdio.h>

void main() {
	int num, r;
	
	printf("숫자를 입력하세요\n");
	
	scanf_s("%d", &num);
	
	while (num != 0) {
		r = num % 10;
		num = num / 10;
		printf("%d", r);
	}

}