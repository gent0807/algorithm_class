#include <stdio.h>

void main() {
	int count=0, data[40], sum=0;
	double avg;

	printf("10���� ������ �Է����ּ���\n");
	
	while(count<10){
		scanf_s("%d", &data[count]);
		sum = sum + data[count];
		count++;
	}

	avg = sum / 10;

	printf("10�� �л��� ����� %f", avg);
}