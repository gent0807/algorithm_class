#include <stdio.h>

int main() {
	int n, data, large=0;

	printf("입력받을 데이터 개수를 입력하세요.\n");
	scanf_s("%d", &n);

	printf("데이터를 입력해주세요.\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &data);
		if (data > large) {
			large = data;
		}
	}
		printf("%d개의 수 중 가장 큰 수:%d", n, large);
	
		return 0;
	}
	
