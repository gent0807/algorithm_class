#include <stdio.h>

int gcd(int x, int y);

void main() {
	int result;
	int a, b, cond = 1;

	while (cond)
	{
		printf("�ִ������� ���� �� ���� �Է��ϼ���.\n");
		scanf_s("%d %d", &a, &b);
		result = gcd(a, b);
		printf("gcd(%d, %d)=%d.\n", a, b, result);
		printf("����ϽǷ���?(1/0)\n");
		scanf_s("%d", &cond);
	}
	printf("����Ǿ����ϴ�.");
}


int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else
		return gcd(y, x % y);
}