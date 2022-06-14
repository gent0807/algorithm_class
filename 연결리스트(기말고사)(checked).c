#include <stdio.h>
#include <stdlib.h>
typedef struct simple_list* simple_pointer;
struct simple_list {
	char state[3];					  
	int count;
	simple_pointer list_pointer;
};

simple_pointer state_list();
void append(simple_pointer ptr, simple_pointer inode);
void print_list(simple_pointer);

void main() {
	simple_pointer ptr, inode;
	ptr = state_list();
	inode = (simple_pointer)malloc(sizeof(struct simple_list));
	strcpy(inode->state, "TX");
	inode->count = 7;
	append(ptr, inode);
	print_list(ptr);
}

simple_pointer state_list() {
	simple_pointer node1, node2;
	node1 = (simple_pointer)malloc(sizeof(struct simple_list));
	node2 = (simple_pointer)malloc(sizeof(struct simple_list));

	strcpy(node1->state, "NY");
	node1->count = 5;
	node1->list_pointer = node2;

	strcpy(node2->state, "FL");
	node2->count = 3;
	node2->list_pointer = NULL;

	return node1;

}
void append(simple_pointer ptr, simple_pointer inode) {
	simple_pointer before;
	while (ptr != NULL) {
		before = ptr;
		ptr = before->list_pointer;
	}
	before->list_pointer = inode;
	inode->list_pointer = NULL;
	
}
void print_list(simple_pointer ptr) {
	simple_pointer before;
	while (ptr != NULL) {
		before = ptr;
		printf("%s %d", before->state, before->count); //출력을 먼저해주고 이동
		ptr = before->list_pointer;
	}
}