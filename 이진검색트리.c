#include <stdio.h>
typedef struct node {
	struct node* left;
	char* word;
	struct node* right;
}NODETYPE;
int inser_node(NODETYPE* root, char* str);
NODETYPE* search(NODETYPE* root, char* key);
void inorder(NODETYPE* root);
void main() {
	NODETYPE* tree = NULL;
	NODETYPE* ptr;
	char wbuf[30];

	printf(" �˻� Ʈ���� ������ �ܾ �Է��ϼ���.\n �Է��� ������ quit�� �Է��ϼ���.\n");

	while(strcmp(gets(wbuf), "quit")) {
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
		if()
	}
}