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
	printf("200부터 1000사이의 존재하는 짝수들의 합은 %d입니다.\n", sum);
}