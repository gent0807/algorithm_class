#include <stdio.h>

int main() {

	int n1, n2, n3, large;

	printf("�� ���� �Է��Ͽ� �ּ���.\n");

	scanf_s("%d %d %d", &n1, &n2, &n3);

	if (n1 > n2)
		large = n1;

	else
		large = n2;

	if (n3 > large)
		large = n3;


	printf("�� �� �� ���� ū ��: %d\n", large);

	return 0;


}