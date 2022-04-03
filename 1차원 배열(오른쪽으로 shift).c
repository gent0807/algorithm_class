#include <stdio.h>

void main() {
	int arr[10];

	for (int i = 0; i < 10; i++) {
		printf("정수 하나를 입력하세요.\n");
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	for (int i = 8; i > 0; i--) {
		arr[i + 1] = arr[i];
	}
	printf("\n");
	for (int i = 1; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	
}