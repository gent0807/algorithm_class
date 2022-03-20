#include <stdio.h>

void main() {
	int count=0, data[40], sum=0;
	double avg;

	printf("10명의 성적을 입력해주세요\n");
	
	while(count<10){
		scanf_s("%d", &data[count]);
		sum = sum + data[count];
		count++;
	}

	avg = sum / 10;

	printf("10명 학생의 평균은 %f", avg);
}