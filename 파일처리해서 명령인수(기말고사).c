#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int gcd(int x, int y); //!!!!!

main(int argc, char* argv[]) {
	int a, b, result, answer;
	int correct = 0, i = 0;
	FILE* infile;  

	if (argc != 2) {
		printf("실행인수를 잘못 주었습니다.\n");  
		exit(1);
	}

	if ((infile = fopen(argv[1], "r")) == NULL) {   //전역변수로 잡혀있기 때문에 대입연산으로 실제 메모리에 저장된 값이 변한다.
		printf("입력파일을 열 수 없습니다.\n");
		exit(1);
	}
	
	while (fscanf(infile,"%d %d", &a, &b)!=EOF)
		printf("%d:gcd(%d, %d) =", i + 1, a, b);
	{
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
	printf("%d 문제 중에 %d 문제 통과하셨습니다....\n", i, correct);
	
}

int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else
		return gcd(y, x % y);
}  ////!!!!!!