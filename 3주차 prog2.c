#include <stdio.h>
#define NUM 100

void main() {
	int i, scores[NUM][2], sid, jumsu = 0, rank, n;
	printf("�л� ���� �Է��ϼ��� :");
	scanf_s("%d", &n);
	printf("�й��� ������ �Է��ϼ���: \n");
	for (i = 0; i < n; i++) {
		scanf_s("%d %d", &scores[i][0], &scores[i][1]);
	}
	printf("�й��� �Է����ּ���:");
	scanf_s("%d", &sid);
	for (int j = 0; j < n; j++)
		if (sid == scores[j][0]) {
			jumsu = scores[j][1];
			break;
		}
	rank = 1;
	for (int k = 0; k < n; k++) {
		if (jumsu < scores[k][1])
			rank++;
	}
	printf("%d�� �й��� ���� �л��� %d���Դϴ�.\n", sid, rank);
	printf("%d�� �й��� ���� �л��� ������ %d�Դϴ�.\n", sid, jumsu);

}
