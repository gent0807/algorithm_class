#include <stdio.h>
#include <stdbool.h>

void main() {
	int num = 50;
	int n;
	bool prime;
	while (num <= 100) {
		prime = true;
		n = 2;
		while (n < num) {
			if (num % n == 0) {
				prime = false;
			}
			n++;
		}
		if (prime == true) {
			printf("%d ", num);
		}
		num++;
		
	}

}