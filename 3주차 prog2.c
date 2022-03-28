#include <stdio.h>
#define NUM 100

void main() {
	int i, scores[NUM][2], sid, jumsu = 0, rank, n;
	printf("학생 수를 입력하세요 :");
	scanf_s("%d", &n);
	printf("학번과 점수를 입력하세요: \n");
	for (i = 0; i < n; i++) {
		scanf_s("%d %d", &scores[i][0], &scores[i][1]);
	}
	printf("학번을 입력해주세요:");
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
	printf("%d의 학번을 지닌 학생은 %d등입니다.\n", sid, rank);
	printf("%d의 학번을 지닌 학생의 점수는 %d입니다.\n", sid, jumsu);

}
