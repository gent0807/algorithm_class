#include <stdio.h>
#include <stdbool.h>

void main() {
	int year=0;
	bool leap=false;

	printf("해당연도를 입력하세요.\n");
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
		printf("윤년입니다.");
	else printf("윤년이 아닙니다.");

}