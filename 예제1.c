#include <stdio.h>

int main() {

	int n1, n2, n3, large;

	printf("세 수를 입력하여 주세요.\n");

	scanf_s("%d %d %d", &n1, &n2, &n3);

	if (n1 > n2)
		large = n1;

	else
		large = n2;

	if (n3 > large)
		large = n3;


	printf("세 수 중 가장 큰 수: %d\n", large);

	return 0;


}