#include <stdio.h>

void main() {
	int mult = 1;
	int x, y;

	printf("�� ���� ������ �Է��ϼ���.\n");
	scanf_s("%d %d", &x, &y);
	while (y > 0) {
		mult *= x;
		y = y-1;
	}
	printf("�� ���� ù��° ���� �� ��° ����ŭ ������ ���� %d�Դϴ�.\n", mult);
}