#include <stdio.h>

void main() {
	int x, nega=0;
	for (int i = 0; i < 30; i++) {
		printf("������ �Է��ϼ���.\n");
		scanf_s("%d", &x);
		if (x < 0) {
			nega += 1;
		}
	}
	printf("�Է��� ���� �� ������ ������ %d�Դϴ�.\n", nega);
}