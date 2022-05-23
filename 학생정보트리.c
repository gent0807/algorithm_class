#include <stdio.h>
typedef struct node {
	struct node* left;
	struct node* right;
	long id;
	float grade;
}SNODETYPE;

int insert_node(SNODETYPE* root, long sid, float grade);
SNODETYPE* search(SNODETYPE* root, long keyid);
void inorder(SNODETYPE* root);
void over4(SNODETYPE* root);

void main(int argc, char* argv[]) {
	SNODETYPE* tree = NULL;
	SNODETYPE* ptr;
	long sid;
	float grade;
	FILE* input;

	if ((input = fopen(argv[1], "r")) == NULL) {
		printf("입력파일을 열 수 없습니다.\n");
		exit(1);
	}

	while (fscanf(input, "%ld %f", &sid, &grade) != EOF) {
		if (!tree) {
			tree = (SNODETYPE*)malloc(sizeof(SNODETYPE));
			tree->id = sid;
			tree->left = tree->right = NULL;
			tree->grade = grade;
		}
		else
			insert_node(tree, sid, grade);
	}

	printf("\n-------저장된 트리 순회 리스트-------\n");

	inorder(tree);

	printf("Enter student id number to search: ");
	scanf("%ld", &sid);
	ptr = search(tree, sid);
	if (ptr)
		printf("%ld is in this tree(%.2f).\n", ptr->id, ptr->grade);
	else
		printf("%ld is not exist.\n", sid);
	printf("\n4.0이상인 학생 검색결과: \n");
	over4(tree);
}
SNODETYPE* search(SNODETYPE* root, long keyid) {
	SNODETYPE* tptr = root;

	while (tptr) {
		
		if (keyid < tptr->id)
			tptr = tptr->left;
		else if (keyid < tptr->id)
			tptr = tptr->right;
		else
			return tptr;
	}
	return NULL;
}
int insert_node(SNODETYPE* root, long keyid) {
	SNODETYPE* tptr = root, * before = NULL;
	int left;
	while (tptr) {
		
		if (keyid < tptr->id) {
			before = tptr;
			tptr = tptr->left;
			left = 1;
		}
		else if (keyid > tptr->id) {
			before = tptr;
			tptr = tptr->right;
			left = 0;
		}
		else
			return 0;
	}

	tptr = (SNODETYPE*)malloc(sizeof(SNODETYPE));
	tptr->id = keyid;
	tptr->left = tptr->right = NULL;
	if (left) before->left = tptr;
	else before->right = tptr;
	return 1;

}
void inorder(SNODETYPE* ptr) {

	if (ptr) {
		inorder(ptr->left);
		printf("%s\n", ptr->id);
		inorder(ptr->right);
	}
}
void over4(SNODETYPE* ptr) {
	if (ptr) {
		over4(ptr->left);
		if (ptr->grade >= 4.0)
			printf("%ld\t%.2f\n", ptr->id, ptr->grade);
		over4(ptr->right);
	}
}