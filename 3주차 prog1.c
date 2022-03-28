#include <stdio.h>

void main() {
	int num, max = 0, size = 0;
	printf("데이터를 입력하세요\n");
	scanf_s("%d", &num);

	while (num > 0) {
		size += 1;
		if (num > 0)
			max = num;
		printf("데이터를 입력하세요\n");
		scanf_s("%d", &num);
	}
	printf("데이터 수: %d", size);

	if (size = 0)
		printf("No data!!!");

	else printf("최대 값: %d", max);
}
