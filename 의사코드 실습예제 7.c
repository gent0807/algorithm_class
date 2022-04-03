#include <stdio.h>

void main() {
	int os=0, db=0, c=0;
	int total;
	char grade;
	double average;

	printf("세 과목의 성적을 입력하세요.\n");
	scanf_s("%d %d %d", &os, &db, &c);
	total = os + db + c;
	average = (double)total / 3;
	 
	if (average >= 90) {
		grade = 'A';
	}
	else if (average >= 80) {
		grade = 'B';
	}
	else if (average >= 70) {
		grade = 'C';
	}
	else
		grade = 'F';

	printf("세 과목의 총점은 %d, 평균은 %lf, 성적은 %c입니다.\n",total,average,grade);
}