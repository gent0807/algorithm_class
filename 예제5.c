#include <stdio.h>

void main() {
	int n, data;
	int mult = 1, allzero = 1, count = 0;
	
	printf("�Է¹��� �������� ������ �Է��ϼ���\n");
	scanf_s("%d", &n);
	printf("�����͸� �Է��ϼ���\n");
	while (count<n){
		scanf_s("%d", &data);
		if (data != 0) {
			mult = mult * data;
			allzero = 0;
		}
		count++;
	}
	if (allzero == 1)
		mult = 0;
	printf("%d���� ���� ���� ����� %d", n, mult);
}