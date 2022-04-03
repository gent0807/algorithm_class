#include <stdio.h>

void main() {
	int out;
	int in;
	int result;

	out = 2;
	while (out <= 9) {
		for (in = 1; in <= 9; in++) {
			result = out * in;
			printf("%d x %d = %d\n", out, in, result);
		}
		out++;
	}
}