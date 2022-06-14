#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 15
void make_msqure(int table[][MAX_SIZE], int n);
void display(int table[][MAX_SIZE], int n);
void main() {
	int n,r,c;// n은 행과 열의 개수가 같다는 속성을 지니게 되는 마방진의 행과 열의 개수를 뜻하고 r은 그 마방진의 행의 개수를, c는 그 마방진의 열의 개수를 뜻한다.

	int table[MAX_SIZE][MAX_SIZE];// 마방진을 이차원 배열 구조로 치환하여 정의해준다.
	printf("Enter a number: "); // 유저가 마방진의 크기를 결정할 수 있도록 해준다.
	scanf("%d", &n);// 유저가 정한 마방진의 크기를 메모리로 기억하도록 해준다.

	if ((n < 1) || n > MAX_SIZE) {
		printf("Error! size is out of range.\n");
		exit(0);
	}

	if (!(n % 2)) {
		printf("Error! size is even.\n");//마방진의 한변의 크기는 홀수여야 함을 참고하자.
		exit(0);
	}

	for (r = 0; r < n; r++)
		for (c = 0; c < n; c++)
			table[r][c]=0;/*이차원 배열 구조로 치환된 마방진의 배열 요소들의 상태를 표시해주는 마킹용이다.*/

	make_msqure(table, n);//이차원 배열 구조로 치환된 마방진을 만들어주는 함수,
	display(table, n);//이차원 배열을 display
}
void make_msqure(int table[][MAX_SIZE], int n) { // 
	int row=0, col=0; // next_row와 next_col
	int r = 0;// 첫 번째 데이터가 들어갈 요소의 행 인덱스
	int c = (n - 1) / 2;//첫 번째 데이터가 들어가 요소의 열 인덱스
	table[r][c] = 1;//첫 번째 데이터를 1로 주어 1부터 시작 


	/*첫번째 배열 요소 배치가 이루어지고, 이때부터 마방진 배열을 채워나가기 시작함.*/
	for (int digit = 2; digit <= n * n; digit++) {//digit은 이차원 배열에 배열요소로 들어갈 값, 1은 이미 마방진의 요소값으로 들어갔기 때문에 2부터 마방진의 마지막 인덱스 값까지 존재하게 된다.
		row = r - 1; //여기서 row는 이동할 위치의 행값, next_row
		col = c - 1; //여기서 col은 이동할 위치의 열값, next_col
		if (row < 0) row = n - 1;2
		if (col < 0) col = n - 1;
		if (table[row][col]) r++;//=>이미 값이 존재하므로 행의 인덱스 넘버를 올려준다.
		else {//바로 위 if문에 대한 else
			r = row;
			c = col;
		}
		table[r][c] = digit;
	}
}

void display(int table[][MAX_SIZE], int n) {
	int sum = 0;
	for (int r = 0; r < n; r++) {
		for (int c = 0; c < n; c++) {
			printf("%5d", table[r][c]);

		}
		printf("\n");
	}
	for (int c = 0; c < n; c++) {
		sum += table[0][c];
	}
	printf("Row/Cmn/Diagonal Sum=%d\n", sum);
}