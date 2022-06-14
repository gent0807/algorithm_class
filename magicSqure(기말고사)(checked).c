#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 15
void make_msqure(int table[][MAX_SIZE], int n);
void display(int table[][MAX_SIZE], int n);
void main() {
	int n,r,c;// n�� ��� ���� ������ ���ٴ� �Ӽ��� ���ϰ� �Ǵ� �������� ��� ���� ������ ���ϰ� r�� �� �������� ���� ������, c�� �� �������� ���� ������ ���Ѵ�.

	int table[MAX_SIZE][MAX_SIZE];// �������� ������ �迭 ������ ġȯ�Ͽ� �������ش�.
	printf("Enter a number: "); // ������ �������� ũ�⸦ ������ �� �ֵ��� ���ش�.
	scanf("%d", &n);// ������ ���� �������� ũ�⸦ �޸𸮷� ����ϵ��� ���ش�.

	if ((n < 1) || n > MAX_SIZE) {
		printf("Error! size is out of range.\n");
		exit(0);
	}

	if (!(n % 2)) {
		printf("Error! size is even.\n");//�������� �Ѻ��� ũ��� Ȧ������ ���� ��������.
		exit(0);
	}

	for (r = 0; r < n; r++)
		for (c = 0; c < n; c++)
			table[r][c]=0;/*������ �迭 ������ ġȯ�� �������� �迭 ��ҵ��� ���¸� ǥ�����ִ� ��ŷ���̴�.*/

	make_msqure(table, n);//������ �迭 ������ ġȯ�� �������� ������ִ� �Լ�,
	display(table, n);//������ �迭�� display
}
void make_msqure(int table[][MAX_SIZE], int n) { // 
	int row=0, col=0; // next_row�� next_col
	int r = 0;// ù ��° �����Ͱ� �� ����� �� �ε���
	int c = (n - 1) / 2;//ù ��° �����Ͱ� �� ����� �� �ε���
	table[r][c] = 1;//ù ��° �����͸� 1�� �־� 1���� ���� 


	/*ù��° �迭 ��� ��ġ�� �̷������, �̶����� ������ �迭�� ä�������� ������.*/
	for (int digit = 2; digit <= n * n; digit++) {//digit�� ������ �迭�� �迭��ҷ� �� ��, 1�� �̹� �������� ��Ұ����� ���� ������ 2���� �������� ������ �ε��� ������ �����ϰ� �ȴ�.
		row = r - 1; //���⼭ row�� �̵��� ��ġ�� �ప, next_row
		col = c - 1; //���⼭ col�� �̵��� ��ġ�� ����, next_col
		if (row < 0) row = n - 1;2
		if (col < 0) col = n - 1;
		if (table[row][col]) r++;//=>�̹� ���� �����ϹǷ� ���� �ε��� �ѹ��� �÷��ش�.
		else {//�ٷ� �� if���� ���� else
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