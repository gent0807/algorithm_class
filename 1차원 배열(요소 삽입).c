#include <stdio.h>

void main() {
	int n;
	int arr[10];
	int save;

	for (int i = 0; i < 10; i++) {
		printf("�ϳ��� ������ �Է��ϼ���\n");
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	printf("������ �����͸� �����ϰ� ���� �ε����� �Է��ϼ���.\n");
	scanf_s("%d", &n);

	save = arr[9];

	for (int i = 8; i > n; i--) {
		arr[i + 1] = arr[i];
	}

	arr[n] = save;

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	
}