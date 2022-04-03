#include <stdio.h>
#define NUM 100
void main() {
	int temp;
	int arr[NUM];
	int i1, i2;

	printf("0이상 100미만의 정수 중 두 개의 수를 입력하세요.\n");
	scanf_s("%d %d", &i1, &i2);
	printf("두 정수를 입력하세요.\n");
	scanf_s("%d %d", &arr[i1], &arr[i2]);
	
	printf("arr[%d]=%d, arr[%d]= %d\n", i1, arr[i1], i2, arr[i2]);

	temp = arr[i1];
	arr[i1] = arr[i2];
	arr[i2] = temp;

	printf("arr[%d]=%d, arr[%d]= %d, temp=%d\n", i1, arr[i1], i2, arr[i2],temp);



}