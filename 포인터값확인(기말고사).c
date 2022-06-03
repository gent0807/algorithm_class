#include <stdio.h>

int main() {
	int* p, q;
	float* fp, x;
	p = &q;
	*p = 199;

	fp = &x;
	scanf("%f", fp);
	x = *fp;
	printf("%d---%.2f\n", q, x);
}