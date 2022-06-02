#include <stdio.h>

typedef struct student {
	long id;
	char name[20];
	double score;
}sdatatype;

void insert_sort1(sdatatype a[], int n);
void insert_sort2(sdatatype a[], int n);

void main(int argc, char* argv[]) {
	sdatatype s[50];
	FILE* infile, * out;
	int i = 0, j;
	char choice;

	if (argc != 3) {
		printf("�����μ��� �߸��־����ϴ�.\n");
	}

	if ((infile = fopen(argv[1], "r")) == NULL) {
		printf("�Է������� �� �� �����ϴ�.\n");
		exit(1);
	}

	if ((out = fopen(argv[2], "w")) == NULL) {
		printf("��������� �� �� �����ϴ�.\n");
		exit(1);
	}

	while (fscanf(infile, "%ld %s %lf", &(s[i].id), s[i].name, &(s[i].score)) != EOF) {
		i++;
	}
	printf("�й� ������ �����Ϸ��� 1�� \n");
	printf("���� ������ �����Ϸ��� 2�� �����Ͻÿ�: ");
	scanf("%c", &choice);
	if (choice == '1') insert_sort1(s, i);
	else if (choice == '2') insert_sort2(s, i);
	else {
		printf("���ù�ȣ�� �߸� �Է��Ͽ����ϴ�.\n");
		exit(1);
	}

	for (j = 0; j < i; j++) {
		fprintf(out, "%ld\t%s\t%.2f\n", s[j].id, s[j].name, s[j].score);
		printf("%ld\t%s\t%.2f\n", s[j].id, s[j].name, s[j].score);
	}
	printf("Program terminated....\n");

	
}
void insert_sort1(sdatatype a[], int n) {
	int i, j;
	sdatatype temp;
	for (i = 1; i < n; i++) {
		temp = a[i];
		j = i - 1;
		while (a[j].id > temp.id && j >= 0) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
}
void insert_sort2(sdatatype a[], int n) {
	int i, j;
	sdatatype temp;
	for (i = 1; i < n; i++) {
		temp = a[i];
		j = i - 1;
		while (a[j].id < temp.id && j >= 0) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
}