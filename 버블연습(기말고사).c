#include <stdio.h>
void bubble(unsigned a[], int n);
void main() {
	int a[] = { 12, 17, 25, 33, 48, 52, 86, 37, 100, 70 };
	bubble(a, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d\t", a[i]);
	}

}

void bubble(int a[], int n) {
	int i = n - 1, tmp, flag = 1;
	while (flag && i != 0) {
		flag = 0;
		for (int j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				flag = 1;
				tmp = a[j];
				a[j]= a[j + 1];
				a[j + 1]= tmp;
				
			}
		}
		i--;
	}
}