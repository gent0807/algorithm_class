#include <stdio.h>

void main() {
	int n = 0;
	int id[2], db[2], os[2], c[2];
	int total=0;
	int number;
	double avg;

	while (n < 2) {
		printf("�л��� �й��� 3������ ������ �Է��ϼ���.\n");
		scanf_s("%d %d %d %d", &id[n], &db[n], &os[n], &c[n]);
		total = db[n] + os[n] + c[n];
		avg = (double)total / 3;
		printf("�й��� %d�� �л��� ������ %d, ����� %lf\n", id[n], total, avg);
		n = n + 1;
	}

	n = 0;
	printf("ã���� �ϴ� �л��� �й��� �Է��ϼ���.\n");
	scanf_s("%d", &number);

	while (n < 2) {
		if (id[n] == number) {
			printf("�� �л��� db ������ %d, os ������ %d, c ������ %d�Դϴ�.\n", db[n], os[n], c[n]);
			total = db[n] + os[n] + c[n];
			avg = (double)total / 3;
			printf("�� �л��� ������ %d, ����� %lf\n", total, avg);
		}
		n++;
	}
	

}