#include <stdio.h>

void swap(int* a, int* b);

void main() {
	int x, y, z;
	printf("�� ���� �Է��Ͻÿ�.");
	scanf("%d %d %d", &x, &y, &z);
	if (x > y)swap(&x, &y);
	if (y > z)swap(&y, &z);
	if (x > y)swap(&x, &y);
	printf("%d*****%d*****%d\n", x, y, z);
}

void swap(int* a, int* b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;

}