#include <stdio.h>

void main() {
	int arr[5][5];
	int num = 1;
	int row;
	int col;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = 0;
		}
	}

	row = 0;
	while (row<5)
	{
		col = 4 - row;
		while (col<5)
		{
			arr[row][col] = num;
			num++;
			col++;

		}
		row++;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[i][j] == 0)
				printf("    ");
			else printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	
}