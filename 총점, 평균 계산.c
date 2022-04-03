#include <stdio.h>

void main() {
	int n = 0;
	int id[2], db[2], os[2], c[2];
	int total=0;
	int number;
	double avg;

	while (n < 2) {
		printf("학생의 학번과 3과목의 점수를 입력하세요.\n");
		scanf_s("%d %d %d %d", &id[n], &db[n], &os[n], &c[n]);
		total = db[n] + os[n] + c[n];
		avg = (double)total / 3;
		printf("학번이 %d인 학생의 총점은 %d, 평균은 %lf\n", id[n], total, avg);
		n = n + 1;
	}

	n = 0;
	printf("찾고자 하는 학생의 학번을 입력하세요.\n");
	scanf_s("%d", &number);

	while (n < 2) {
		if (id[n] == number) {
			printf("이 학생의 db 점수는 %d, os 점수는 %d, c 점수는 %d입니다.\n", db[n], os[n], c[n]);
			total = db[n] + os[n] + c[n];
			avg = (double)total / 3;
			printf("이 학생의 총점은 %d, 평균은 %lf\n", total, avg);
		}
		n++;
	}
	

}