#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int gcd(int x, int y);

main(int argc, char* argv[]) {
	int a, b, result, answer;
	int correct = 0, i = 0;
	FILE* infile;

	if (argc != 2) {
		printf("�����μ��� �߸� �־����ϴ�.\n");
		exit(1);
	}

	if ((infile = fopen(argv[1], "r")) == NULL) {
		printf("�Է������� �� �� �����ϴ�.\n");
		exit(1);
	}
	
	while (fscanf(infile,"%d %d", &a, &b)!=EOF)
	{
		printf("%d:gcd(%d, %d) =", i + 1, a, b);
		scanf_s("%d", &answer);
		result = gcd(a, b);
		if (answer != result) {
			printf("Answer: gcd(%d, %d) =%d\n", a, b, result);
			
		}
		else
		{
			printf("Correct....\n");
			correct++;
		}
		i++;
	}
	printf("%d ���� �߿� %d ���� ����ϼ̽��ϴ�....\n", i, correct);

}

int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else
		return gcd(y, x % y);
}