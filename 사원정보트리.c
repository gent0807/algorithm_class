#include <stdio.h>

typedef struct node {
	struct node* left;
	int eid;
	int syear;
	char grade;
	struct node* right;
}ENODE;

int insert_node(ENODE* root, int num, int year, char score);
ENODE* search(ENODE* root, int key);
void inorder(ENODE* root);
void year_search(ENODE* root, int year);

void main(int argc, char* argv[]) {
	ENODE* tree = NULL;
	ENODE* ptr;
	int id, year;
	char score;
	FILE* input;

	if ((input = fopen(argv[1], "r")) == NULL) {
		printf("입력파일을 열 수 없습니다.\n");
		exit(1);
	}

	while (fscanf(input, "%d %d %c", &id, &year, &score) != EOF) {
		if (!tree) {
			tree = (ENODE*)malloc(sizeof(ENODE));
			tree->eid = id;
			tree->syear = year;
			tree->grade = score;
			tree->left = tree->right = NULL;
		}
		else
			insert_node(tree, id, year, score);
	}

	printf("\n-------저장된 트리 순회 리스트-------\n");

	inorder(tree);

	printf("Enter 입사년도 to search: ");
	scanf("%d", &year);
	year_search(tree, year);

	printf("Enter 사원번호 to search: ");
	scanf("%d", &id);
	ptr = search(tree, id);
	if (ptr)
		printf("%d는 %d에 입사했고 인사등급은 %c입니다.\n", ptr->eid, ptr->syear, ptr->grade);
	else
		printf("%d is not exist.\n", ptr->eid);
}
ENODE* search(ENODE* root, int key) {
	ENODE* tptr = root;

	while (tptr) {

		if (key < tptr->eid)
			tptr = tptr->left;
		else if (key < tptr->eid)
			tptr = tptr->right;
		else
			return tptr;
	}
	return NULL;
}
int insert_node(ENODE* root, int num, int year, char score) {
	ENODE* tptr = root, * before = NULL;
	int left = 1;
	while (tptr) {

		if (num< tptr->eid) {
			before = tptr;
			tptr = tptr->left;
			left = 1;
		}
		else if (num> tptr->eid) {
			before = tptr;
			tptr = tptr->right;
			left = 0;
		}
		else
			return 0;
	}

	tptr = (ENODE*)malloc(sizeof(ENODE));
	tptr->eid = num;
	tptr->syear = year;
	tptr->grade = score;
	tptr->left = tptr->right = NULL;
	if (left) before->left = tptr;
	else before->right = tptr; 
	return 1;

}
void inorder(ENODE* ptr) {

	if (ptr) {
		inorder(ptr->left);
		printf("%d\t%d\t%c\n", ptr->eid, ptr->syear, ptr->grade);
		inorder(ptr->right);
	}
}
void year_search(ENODE* root, int year) {
	ENODE* tptr = root;
		year_search(tptr->left, year);
	while (tptr) {
		if (tptr->syear == year)
			printf("%d %c\n", tptr->eid, tptr->grade);
		year_search(tptr->right, year);
	}
}