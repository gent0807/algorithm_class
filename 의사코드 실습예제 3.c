#include <stdio.h>

void main() {
	int sum = 0;
	for (int i = 1; i < 11; i++) {
		sum += i * i;
	}
	printf("1���� 10������ �������� ���������� ���� %d�Դϴ�.\n", sum);
}