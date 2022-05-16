#include <stdio.h>
float trunc_sum(float *data);
main() {
	float xarray[10], fsum = 0.0;
	int i;
	printf("Enter 10 reals:");
	for (i = 0; i < 10; i++) {
		scanf("%f", xarray + i);
		fsum = fsum + *(xarray + i);
	}
	printf("sum=%.2f\n", fsum);
	for (i = 0; i < 10; i++) {
		printf("%d\n", xarray + i);
	}
	printf("Truncation Value=%.2f\n", trunc_sum(xarray));
	


}
float trunc_sum(float* data) {
	float sum = 0.0;
	int i;

	for (i = 0; i < 10; i++) {
		sum += data[i] - (int)data[i];
	}
}