#include <stdio.h>

void main() {
	int a, b, sum, sub, mult;
	double div;

	printf("�� ���� ������ �Է��ϼ���.\n");
	scanf_s("%d %d", &a, &b);

	sum = a + b;
	sub = a - b;
	mult = a * b;
	div = (double)a / b;

	printf("�� ������ ���� %d, �� ������ �� ���� %d�Դϴ�.\n", sum, sub);
	printf("�� ������ ���� %d, �� ������ ���� ���� %.2f�Դϴ�.", mult, div);
}