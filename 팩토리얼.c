#include <stdio.h>

void main() {
	int fact = 1;
	int N;
	int cnt = 1;

	printf("���丮�� ������ �ϰ� ���� ���� �Է��ϼ���.\n");
	scanf_s("%d", &N);
	
	while (cnt<=N)
	{
		fact = fact * cnt;
		cnt++;

	}
	printf("%d", fact);

}