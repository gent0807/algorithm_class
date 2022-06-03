#include <stdio.h>
void selection_sort(double a[], int n);
void main() {
	double score[] = { 90.5, 89.7, 92.5, 85.6,97.5,76.9,88.2,70.3,93.2,94.3 };
	int i, n = sizeof(score) / sizeof(double);

	for (int i = 0; i < n; i++)
		printf("%3d: %.1f", i + 1, score[i]);
	selection_sort(score, n);
	printf("\n---TOP 3 score----\n\n");
	for (i = 0; i < 3; i++)
		printf("     %.1f\n", score[i]);
}
void selection_sort(double a[], int n) {
	int s, m, j;
	double temp;

	for (s = 0; s < n - 1; s++) {
		m = s;
		for (j = s + 1; j < n; j++)
			if (a[j] > a[m])m = j;
		temp = a[s];
		a[s] = a[m];
		a[m] = temp;
	}
}
