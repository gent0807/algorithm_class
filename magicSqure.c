#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 15
void make_msqure(int table[][MAX_SIZE], int n);
void display(int table[][MAX_SIZE], int n);
void main() {
	int n,r,c;
	int table[MAX_SIZE][MAX_SIZE];
	printf("Enter a number: ");
	scanf("%d", &n);

	if ((n < 1) || n > MAX_SIZE) {
		printf("Error! size is out of range.\n");
		exit(0);
	}

	if (!(n % 2)) {
		printf("Error! size is even.\n");
		exit(0);
	}

	for (r = 0; r < n; r++)
		for (c = 0; c < n; c++)
			table[r][c]=0;

	make_msqure(table, n);
	display(table, n);
}
void make_msqure(int table[][MAX_SIZE], int n) {
	int row=0, col=0;
	int r = 0;
	int c = (n - 1) / 2;
	table[r][c] = 1;

	for (int digit = 2; digit <= n * n; digit++) {
		row = r - 1;
		col = c - 1;
		if (row < 0) row = n - 1;
		if (col < 0) col = n - 1;
		if (table[row][col]) r++;
		else {
			r = row;
			c = col;
		}
		table[r][c] = digit;
	}
}

void display(int table[][MAX_SIZE], int n) {
	int sum = 0;
	for (int r = 0; r < n; r++) {
		for (int c = 0; c < n; c++) {
			printf("%5d", table[r][c]);

		}
		printf("\n");
	}
	for (int c = 0; c < n; c++) {
		sum += table[0][c];
	}
	printf("Row/Cmn/Diagonal Sum=%d\n", sum);
}