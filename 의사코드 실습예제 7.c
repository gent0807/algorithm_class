#include <stdio.h>

void main() {
	int os=0, db=0, c=0;
	int total;
	char grade;
	double average;

	printf("�� ������ ������ �Է��ϼ���.\n");
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

	printf("�� ������ ������ %d, ����� %lf, ������ %c�Դϴ�.\n",total,average,grade);
}