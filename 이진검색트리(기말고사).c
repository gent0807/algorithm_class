#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	struct node* left;
	char* word;
	struct node* right;
}NODETYPE;
int insert_node(NODETYPE* root, char* str);
NODETYPE* search(NODETYPE* root, char* key);
void inorder(NODETYPE* root);
void main() {
	NODETYPE* tree = NULL;
	NODETYPE* ptr;
	char wbuf[30];

	printf(" �˻� Ʈ���� ������ �ܾ �Է��ϼ���.\n �Է��� ������ quit�� �Է��ϼ���.\n");
	while (strcmp(gets(wbuf), "quit")) {
		if (!tree) {
			tree = (NODETYPE*)malloc(sizeof(NODETYPE));
			tree->word = (char*)malloc(strlen(wbuf) + 1);
			strcpy(tree->word, wbuf);
			tree->left = tree->right = NULL;
		}
		else
			insert_node(tree, wbuf);
	}
	printf("\n\nEnter a key to search: ");
	gets(wbuf);
	ptr = search(tree, wbuf);
	if (ptr)
		printf("%s is in this tree.\n\n", ptr->word);
	else
		printf("%s is not exist.\n\n", wbuf);
	printf("Ʈ������ �ܾ�� (������ ����)\n");
	inorder(tree);
}
NODETYPE* search(NODETYPE* root, char* key) {
	NODETYPE* tptr = root;
	int cmp;
	while (tptr) {
		cmp = strcmp(key, tptr->word);
		if (cmp < 0)
			tptr = tptr->left;
		else if (cmp > 0)
			tptr = tptr->right;
		else
			return tptr;
	}
	return NULL;
}
int insert_node(NODETYPE* root, char* word) {
	NODETYPE* tptr = root, * before = NULL;
	int cmp;
	while (tptr) {
		cmp = strcmp(word, tptr->word);
		if (cmp < 0) {
			before = tptr;
			tptr = tptr->left;
		}
		else if (cmp > 0) {
			before = tptr;
			tptr = tptr->right;
		}
		else
			return 0;
	}

	tptr = (NODETYPE*)malloc(sizeof(NODETYPE));
	tptr->word = (char*)malloc(strlen(word) + 1);
	strcpy(tptr->word, word);
	tptr->left = tptr->right = NULL;
	if (cmp < 0) before->left = tptr;
	else before->right = tptr;
	return 1;

}
void inorder(NODETYPE* ptr) {

	if (ptr) {
		inorder(ptr->left);
		printf("%s\n", ptr->word);
		inorder(ptr->right);
	}
}