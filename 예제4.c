#include <stdio.h>

int main() {
	int n, data, large=0;

	printf("�Է¹��� ������ ������ �Է��ϼ���.\n");
	scanf_s("%d", &n);

	printf("�����͸� �Է����ּ���.\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &data);
		if (data > large) {
			large = data;
		}
	}
		printf("%d���� �� �� ���� ū ��:%d", n, large);
	
		return 0;
	}
	
