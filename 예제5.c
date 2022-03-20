#include <stdio.h>

void main() {
	int n, data;
	int mult = 1, allzero = 1, count = 0;
	
	printf("입력받을 데이터의 개수를 입력하세요\n");
	scanf_s("%d", &n);
	printf("데이터를 입력하세요\n");
	while (count<n){
		scanf_s("%d", &data);
		if (data != 0) {
			mult = mult * data;
			allzero = 0;
		}
		count++;
	}
	if (allzero == 1)
		mult = 0;
	printf("%d개의 수를 곱한 결과는 %d", n, mult);
}