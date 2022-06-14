#include <stdio.h>
typedef struct employee {
	long eid;
	char name[20];
	int escore;
	char dname[5];
}edatatype;
void main(int argc, char* argv[]) {
	edatatype edb[50];
	FILE* infile, * out;
	int i = 0, j;
	char choice;
	char dcode[5];

	if (argc != 3) {
		printf("실행인수를 잘못 주었습니다.\n");
		exit(1);
	}

	if ((infile = fopen(argv[1], "r")) == NULL) {
		printf("입력 파일을 열 수 없습니다.\n");
		exit(1);
	}

	if ((out = fopen(argv[2], "w")) == NULL) {
		print("결과 파일을 열 수 없습니다.\n");
		exit(1);
	}

	while (fscanf(infile, "%ld %s %d %s", &(edb[i].eid), edb[i].name, &(edb[i].escore), edb[i].dname) != EOF)
		i++;

	quick_sorta(edb, 0, i - 1);
	printf("\n\nSorted Data....\n");

	for (j = 0; j < i; j++) {
		fprintf(out, "%ld\t%s\t%d\t%s\n",(edb[i].eid),edb[j].name,(edb[j].escore),edb[j].dname);
	}

	printf("\n\nFrom the highest English score To the lowest.....\n");

	quick_sortd(edb, 0, i - 1);

	for (j = 0; j < j; j++) {
		printf("%ld\t%s\t%d\t%s\n", (edb[i].eid), edb[j].name, (edb[j].escore), edb[j].dname);
	}
}

void quick_sorta(edatatype a[], int left, int right) {
	long pivot;
	int i, j;
	edatatype tmp;

	if (left < right) {
		i = left; j = right + 1;
		pivot = a[left].eid;
		while (i < j) {
			do i++;
			while ((a[i].eid <= pivot) && (i < right));
			do j--;
			while ((a[j].eid >= pivot) && (j>left));
			if (i < j) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
		if (j != left) {
			tmp = a[j];
			a[j] = a[left];
			a[left] = tmp;
		}
		quick_sorta(a, left, j - 1);
		quick_sorta(a, j + 1, right);
	}
}
void quick_sortd(edatatype a[], int left, int right) {
	long pivot;
	int i, j;
	edatatype tmp;

	if (left < right) {
		i = left; j = right + 1;
		pivot = a[left].eid;
		while (i < j) {
			do i++;
			while ((a[i].eid >= pivot) && (i < right));
			do j--;
			while ((a[j].eid <= pivot) && (j > left));
			if (i < j) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
		if (j != left) {
			tmp = a[j];
			a[j] = a[left];
			a[left] = tmp;
		}
		quick_sorta(a, left, j - 1);
		quick_sorta(a, j + 1, right);
	}
}