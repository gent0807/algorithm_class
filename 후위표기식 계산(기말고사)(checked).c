#include <stdio.h>
#include <stdbool.h>
#define MAX 1000

int top; //stack �ε��� ����
char pexpr[MAX]; //����ǥ��� ������ ���� ����
int stack[MAX];//�ǿ����ڸ� ���� stack

int cal(void);
bool is_operator(char c);
int delete_stack();
void add_stack(int data);


void main() {
	printf("����ǥ������� ������� �Է��ϼ���.\n");
	scanf("%s", pexpr);
	printf("������:%d", cal());
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
