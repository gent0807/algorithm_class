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
		printf("입력파일을 열 수 없습니다.\n");
		exit(1);
	}

	while (fscanf(stockdb, "%u %u", &stock[k][0], &stock[k][1]) != EOF) {
		k++;
	}
	print_item("임의로 저장된 물품코드:\n", stock, k);
	bubble(stock, k);
	print_item("내림차순으로 정렬된 물품코드:\n", stock, k);

	printf("검색할 item number 입력");
	scanf("%u" ,&item_code);
	s = bsearch_stock(stock, k, item_code);
	if (s == -1)printf("재고물품이 없습니다\n");
	else printf("%u의 재고 개수=%u\n", stock[s][0], stock[s][1]);
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
