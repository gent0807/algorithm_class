#include <stdio.h>

void main() {
	int fact = 1;
	int N;
	int cnt = 1;

	printf("팩토리얼 연산을 하고 싶은 수를 입력하세요.\n");
	scanf_s("%d", &N);
	
	while (cnt<=N)
	{
		fact = fact * cnt;
		cnt++;

	}
	printf("%d", fact);

}