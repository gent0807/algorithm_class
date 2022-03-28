#include <stdio.h>
#define DNUM 100

int pcount(int a[], int n);
double avg(int a[], int n);
int large(int a[], int n);
int small(int a[], int n);

void main() {
	int data[DNUM], k, n;
	printf("처리할 데이터의 수: ");
	scanf_s("%d", &n);
	for (k = 0; k < n; k++)
		scanf_s("%d", &data[k]);
	printf("양수의 개수는 %d\n", pcount(data, n));
	printf("데이터의 평균= %.2f\n", avg(data, n));
	printf("최대값=%d\n", large(data, n));
	printf("최소값=%d\n", small(data, n));
}
int pcount(int a[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > 0)
			count++;
	}
	return count;
}
double avg(int a[], int n) {
	int sum = 0;
	double average = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	average = (double)sum / n;
	return average;
}
int large(int a[], int n) {
	int max=a[0];
	for (int i = 0; i < n; i++) {
		if (max < a[i])
			max = a[i];
	}
	return max;
}
int small(int a[], int n) {
	int min = a[0];
	for (int i = 1; i < n; i++) {
		if (min > a[i])
			min = a[i];
	}
	return min;
}