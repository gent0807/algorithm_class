#include <stdio.h>

main() {
	int* ip;
	float* fp;
	ip = (int*)malloc(sizeof(int));
	fp = (float*)malloc(sizeof(float));
	*ip = 2020;
	*fp = 7.123;
	printf("year= %d : point=%.3f\n", *ip, *fp);
	free(ip);
	free(fp);
}