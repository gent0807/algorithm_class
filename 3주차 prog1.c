#include <stdio.h>

void main() {
	int num, max = 0, size = 0;
	printf("�����͸� �Է��ϼ���\n");
	scanf_s("%d", &num);

	while (num > 0) {
		size += 1;
		if (num > 0)
			max = num;
		printf("�����͸� �Է��ϼ���\n");
		scanf_s("%d", &num);
	}
	printf("������ ��: %d", size);

	if (size = 0)
		printf("No data!!!");

	else printf("�ִ� ��: %d", max);
}
