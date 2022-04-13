#include <stdio.h>

void move(int no, int x, int y);

void main() {
	int n;
	printf("Input the number of disk:\n");
	scanf_s("%d", &n);
	if (n <= 0) {
		printf("illegal number of disk!!\n");

	}
	else
	{
		move(n, 1, 3);
	}
}

void move(int no, int x, int y) {
	if (no == 1) {
		printf("Move disk from %d to %d\n", x, y);
	}
	else
	{
		move(no - 1, x, 6 - x - y);
		move(1, x, y);
		move(no - 1, 6 - x - y, y);
	}
}