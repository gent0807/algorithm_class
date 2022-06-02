#define INUM 100
#include <stdio.h>

int bsearch_stock(unsigned a[][2], int n, unsigned key);
void print_item(char* heading, unsigned a[][2], int n);
void bubble(unsigned a[][2], int n);

void main(int argc, char* argv[]) {
	FILE* stockdb;
	int k = 0, s;
	unsigned stock[INUM][2], item_code;

	if ((stockdb = fopen(argv[1], "r")) == NULL) {
		printf("�Է������� �� �� �����ϴ�.\n");
		exit(1);
	}

	while (fscanf(stockdb, "%u %u", &stock[k][0], &stock[k][1]) != EOF) {
		k++;
	}
	print_item("���Ƿ� ����� ��ǰ�ڵ�:\n", stock, k);
	bubble(stock, k);
	print_item("������������ ���ĵ� ��ǰ�ڵ�:\n", stock, k);

	printf("�˻��� item number �Է�");
	scanf("%u" ,&item_code);
	s = bsearch_stock(stock, k, item_code);
	if (s == -1)printf("���ǰ�� �����ϴ�\n");
	else printf("%u�� ��� ����=%u\n", stock[s][0], stock[s][1]);
}
void print_item(char* heading, unsigned a[][2], int n) {
	printf(heading);
	
	for (int i = 0; i < n; i++) {
		printf("%d\t%d\n", a[i][0], a[i][1]);
	}
}
void bubble(unsigned a[][2], int n) {
	int i = n - 1, tmp0, tmp1, flag = 1;
	while (flag && i != 0) {
		flag = 0;
		for (int j = 0; j < i; j++) {
			if (a[j][0] < a[j + 1][0]) {
				flag = 1;
				tmp0 = a[j][0];
				tmp1 = a[j][1];
				a[j][0] = a[j + 1][0];
				a[j][1] = a[j + 1][1];
				a[j + 1][0] = tmp0;
				a[j + 1][1] = tmp1;
			}
		}
		i--;
	}
}
int bsearch_stock(unsigned a[][2], int n, unsigned key) {
	for (int i = 0; i < n; i++) {
		if (a[i][0] == key) {
			return i;
		}
	}
	return -1;
}
