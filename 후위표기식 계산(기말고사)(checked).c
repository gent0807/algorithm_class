#include <stdio.h>
#include <stdbool.h>
#define MAX 1000

int top; //stack 인덱스 변수
char pexpr[MAX]; //후위표기식 문장이 담기는 공간
int stack[MAX];//피연산자를 담을 stack

int cal(void);
bool is_operator(char c);
int delete_stack();
void add_stack(int data);


void main() {
	printf("후위표기식으로 연산식을 입력하세요.\n");
	scanf("%s", pexpr);
	printf("연산결과:%d", cal());
}

int cal(void) {
	char symbol;
	int op1, op2, n = 0;

	top = -1;
	symbol = pexpr[n++];

	while (symbol != '\0') {
		if (is_operator(symbol)) {
			op2 = delete_stack();

			op1 = delete_stack();
			switch (symbol)
			{
			case'+':add_stack(op1 + op2);
				break;
			case'-':add_stack(op1 - op2);
				break;
			case'*':add_stack(op1 * op2);
				break;
			case'/':add_stack(op1 / op2);
				break;
			}
		}

		else
			add_stack(symbol - '0');

		symbol = pexpr[n++];

	}
	return delete_stack();
}

bool is_operator(char c) {
	if (c == '+')
		return true;
	else if (c == '-')
		return true;
	else if (c == '*') {
		return true;
	}
	else if (c == '/') {
		return true;
	}
	else
		return false;
}

void add_stack(int data) {
	top++;
	stack[top] = data;
}

int delete_stack() {
	int out = stack[top];											 
	top--;/******/
	return out;
}
