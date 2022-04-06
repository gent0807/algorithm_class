#include <stdio.h>

void hanoi(int n, char a, char c, char b);

void main() {
	int n;
	printf("Input the number of disk:\n");
	scanf_s("%d", &n);
	if (n <= 0) {
		printf("illegal number of disk!!\n");

	}
	else
	{
		hanoi(n, 'A', 'C', 'B');
	}
}

void hanoi(int n, char a, char c, char b) {
	if (n == 1) {
		printf("Move disk from %c to %c\n", a, c);

	}
	else
	{
		hanoi(n - 1, a, b, c);
		hanoi(1, a, c, b);
		hanoi(n - 1, b, c, a);
	}
}