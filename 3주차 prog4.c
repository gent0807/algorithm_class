#include <stdio.h>
#define NUM 100

int sid, jumsu = 0, rank = 1;

double find_avg(int sdata[][2], int n);
int find_max(int sdata[][2], int n);
int find_rank(int sdata[][2], int n);

void main() {
	int i, scores[NUM][2], n;
	printf("�л� ���� �Է��ϼ��� :");
	scanf_s("%d", &n);
	printf("�й��� ������ �Է��ϼ���: \n");
	for (i = 0; i < n; i++) {
		scanf_s("%d %d", &scores[i][0], &scores[i][1]);
	}
	printf("�л����� ��� ������ %.2f\n", find_avg(scores, n));
	printf("�ְ����� %d\n", find_max(scores, n));
	printf("��ȸ�� �л��� �й��� �Է��ϼ���.");
	scanf_s("%d", &sid);
	printf("�й� %d �л��� ����� %d�Դϴ�.\n", sid, find_rank(scores,n));
}

double find_avg(int sdata[][2],int n) {
	int sum = 0;
	double avg = 0;
	for (int i = 0; i < n; i++) {
		sum += sdata[i][1];
	}
	avg = (double)sum / n;
	return avg;
}
int find_max(int sdata[][2], int n) {
	int max = sdata[0][1];
	for (int i = 0; i < n; i++) {
		if (max < sdata[i][1]) {
			max = sdata[i][1];
		}
	}
	return max;
}
int find_rank(int sdata[][2], int n) {
	for (int i = 0; i < n; i++) {
		if (sid == sdata[i][0])
			jumsu = sdata[i][1];
	}
	for (int i = 0; i < n; i++) {
		if (jumsu < sdata[i][1])
			rank = rank + 1;
	}
	return rank;
}