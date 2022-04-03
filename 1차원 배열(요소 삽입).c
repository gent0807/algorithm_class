#include <stdio.h>

void main() {
	int n;
	int arr[10];
	int save;

	for (int i = 0; i < 10; i++) {
		printf("하나의 정수를 입력하세요\n");
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	printf("마지막 데이터를 삽입하고 싶은 인덱스를 입력하세요.\n");
	scanf_s("%d", &n);

	save = arr[9];

	for (int i = 8; i > n; i--) {
		arr[i + 1] = arr[i];
	}

	arr[n] = save;

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	
}