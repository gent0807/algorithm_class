#include <stdio.h>

void main() {
	int sum = 0;
	int count = 200;
	while(count<=1000){
		if (count%2==0) {
			sum += count;
		}
		count++;
	}
	printf("200���� 1000������ �����ϴ� ¦������ ���� %d�Դϴ�.\n", sum);
}