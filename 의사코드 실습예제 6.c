#include <stdio.h>

void main() {
	int dept=0;

	printf("부서 번호를 입력하세요.\n");

	scanf_s("%d", &dept);

	if (dept <= 3) {
		printf("홍길동");
	}
	else if (dept <= 7) {
		printf("이기자");
	}
	else
	
		printf("김철수");

}