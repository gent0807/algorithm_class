#include <stdio.h>

void main() {
	int num, r;
	
	printf("���ڸ� �Է��ϼ���\n");
	
	scanf_s("%d", &num);
	
	while (num != 0) {
		r = num % 10;
		num = num / 10;
		printf("%d", r);
	}

}