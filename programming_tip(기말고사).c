#include <stdio.h>

void main(int argc, char* argv[]) {
	int i;
	printf("main()함수의 매개변수 수는: %d\n", argc);
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
}