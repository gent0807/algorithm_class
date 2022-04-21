#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define STAGE1 0
#define STAGE2 1
#define STAGE3 2

void real_calculator();
double real_operation(char op, double operand1, double operand2);
double get_real(double operand1, char ch, int status);
int is_operator(char ch);
int is_digit(char ch);

void main() {
	printf("계산기 프로그램을 시작합니다.\n");
	printf("정수형의 피연산자의 사칙연산자 중 하나를 입력하시오.\n");
	printf("결과를 받은 후 끝내려면 문자x를 입력하시오\n");
	void real_calculator();
	printf("\n계산기 프로그램을 종료합니다.\n");

}

void real_calculator() {
	double operand1 = 0, operand2 = 0, result;
	char op, c;
	int current_stage = STAGE1, status = 0;
	bool is_intNumber1 = true;
	bool is_intNumber2 = true;

	while ((c = getchar()) != 'x') {
		if (current_stage == STAGE1) {
			if (is_digit(c)) {
				operand1 = get_real(operand1, c, status);
				if (status != 0) {
					status++;
				}
			}
			else if (c == '.') {
				status = 1;
				is_intNumber1 = false;
			}
			else if (is_operator(c)) {
				op = c;
				operand2 = 0;
				if (status == 0) {
					is_intNumber1 = true;
				}
				status = 0;
				current_stage = STAGE2;
			}
		}
		else if (current_stage == STAGE2) {
			if (c == '\n') {
				if (status == 0) {
					is_intNumber2 = true;
				}
				if (is_intNumber1 == true && is_intNumber2 == true) {
					result = (int)real_operation(op, operand1, operand2);
					printf("\n=%d", result);
				}
				else {
					result = real_operation(op, operand1, operand2);
					printf("\n=%.3f", result);
				}
				status = 0;
				current_stage = STAGE3;
			}
			else if (is_digit(c)) {
				operand2 = get_real(operand2, c, status);
				if (status != 0)
					status++;
			}
			else if (c == '.') {
				status = 1;
				is_intNumber2 = false;
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
}

double get_real(double current_operand, char ch, int status){
	
	int part1;
	double part2;

	if (status == 0) {
		part1 = ch - '0';
		current_operand *= 10;
		current_operand += part1;	
	}
	else if (status != 0) {
		part2 = ch - '0';
		part2 = part2 * pow(10, -status);
		current_operand += part2;
	}
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
double real_operation(char op, double operand1, double operand2) {
	if (op == '+') {
		return operand1 + operand2;
	}
	if (op == '-') {
		return operand1 - operand2;
	}
	if (op == '*') {
		return operand1 * operand2;
	}
	if (op == '/') {
		if (operand2 == 0) {
			printf("0으로 나눌수 없습니다.\n");
			return 0;
		}

	}
	else
		return operand1 / operand2;

}
int is_digit(char ch) {
	if (ch >= '0' && ch <= '9') {
		return 1;
	}
	else
		return 0;
}