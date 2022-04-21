#include <stdio.h>
#define STAGE1 0
#define STAGE2 1
#define STAGE3 2

void int_calculator();
int int_operation(char op, int op1, int op2);
int get_int(int current_operand, char ch);
int is_operator(char ch);
int is_digit(char ch);

void main() {
	printf("���� ���α׷��� �����մϴ�.\n");
	printf("�������� �ǿ������� ��Ģ������ �� �ϳ��� �Է��Ͻÿ�.\n");
	printf("����� ���� �� �������� ����x�� �Է��Ͻÿ�\n");
	void int_calculator();
	printf("\n���� ���α׷��� �����մϴ�.\n");
}

void int_calculator() {
	
	int operand1 = 0, operand2 = 0;
	char op;
	char c = '0';
	int result;
	int current_stage = STAGE1;

	while (c != 'x') {
		c = getchar();
		if (current_stage == STAGE1) {
			if (is_digit(c)) {
				operand1 = get_int(operand1, c);
			}
			else
				if (is_operator(c)) {
					op = c;
					operand2 = 0;
					current_stage = STAGE2;
				}
		}
		else if (current_stage == STAGE2) {
			if (c == '\n') {
				result = int_operation(op, operand1, operand2);
				printf("\n=%d", result);
				current_stage = STAGE3;
			}
			else if (is_digit(c)) {
				operand2 = get_int(operand2, c);
			}

		}
		else if (current_stage == STAGE3) {
			if (c == '\n') {
				operand1 = 0;
				current_stage = STAGE1;
			}
			if (is_operator(c)) {
				op = c;
				current_stage = STAGE2;
				operand1 = result;
				operand2 = 0;
			}

		}
	}
}

int is_digit(char ch) {
	if (ch >= '0' && ch <= '9') {
		return 1;
	}
	else
		return 0;
}

int get_int(int current_operand, char ch) {
	int n = ch - '0';

	current_operand *= 10;
	current_operand += n;
	return current_operand;
}

int is_operator(char ch) {
	if (ch == '+')
		return 1;
	else if (ch == '-')
		return 1;
	else if (ch == '*')
		return 1;
	else if (ch == '/')
		return 1;
	else 
		return 0;
}
int int_operation(char op, int op1, int op2) {
	if (op == '+') {
		return op1 + op2;
	}
	if (op == '-') {
		return op1 - op2;
	}
	if (op == '*') {
		return op1 * op2;
	}
	if (op == '/') {
		if (op2==0){
			printf("0���� ������ �����ϴ�.\n");
			return 0;
		}

	}
	else
		return op1 / op2;
	
}