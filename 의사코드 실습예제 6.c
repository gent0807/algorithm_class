#include <stdio.h>

void main() {
	int dept=0;

	printf("�μ� ��ȣ�� �Է��ϼ���.\n");

	scanf_s("%d", &dept);

	if (dept <= 3) {
		printf("ȫ�浿");
	}
	else if (dept <= 7) {
		printf("�̱���");
	}
	else
	
		printf("��ö��");

}