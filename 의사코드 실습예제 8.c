#include <stdio.h>
#include <stdbool.h>

void main() {
	int year=0;
	bool leap=false;

	printf("�ش翬���� �Է��ϼ���.\n");
	scanf_s(" %d", &year);

	if (year % 400 == 0) {

		leap = true;
	}
	else {
		if (year % 100 == 0) 
		leap = false;
		else if (year % 4 == 0) {
			leap = true;
		}
	}
	
	if (leap == true)
		printf("�����Դϴ�.");
	else printf("������ �ƴմϴ�.");

}