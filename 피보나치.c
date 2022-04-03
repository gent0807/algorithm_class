#include <stdio.h>

void main() {
	int arr[20];
	int sum;
	int i;
	
	arr[0] = 0;
	arr[1] = 1;
	sum = arr[0] + arr[1];
	printf("%d, %d", arr[0], arr[1]);

	i = 2;
	
	while (i < 20) {
		arr[i] = arr[i - 2] + arr[i - 1];
		printf(", %d", arr[i]);
		sum += arr[i];
		i++;
	}

	printf("ÇÕ°è´Â %d", sum);


}