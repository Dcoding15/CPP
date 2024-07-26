#include<stdio.h>
#include<stdlib.h>

/*
 * Time Complexity: -
 * ===============
 *	
 *  Search: O(n)
 *  Insert: O(1)
 *  Delete: O(1)
 *
 *  Space Complexity: O(n)
 * */

struct Node {
	char * data;	// pointer to character
	struct Node * next;
};

struct Node * create(char * value) {
	struct Node * tmp = (struct Node *)malloc(sizeof(struct Node));
	tmp->data = value;
	tmp->next = NULL;
	return tmp;
}

void link(struct Node * node1, struct Node * node2) {
	node1->next = node2;
}

struct Node * insert(struct Node * tmp, char * value) {
	struct Node * new_node = create(value);
	new_node->next = tmp->next;
	tmp->next = new_node;
	return new_node;
}

int search(struct Node * tmp, char * value) {
	int count = 1;
	for (; tmp != NULL && value != tmp->data; tmp = tmp->next, count++) {}
	return count;
}

void delete(struct Node * tmp, char * value) {
	int i;
	for (i = 0; tmp != NULL && value != tmp->next->data; tmp = tmp->next) { ++i;}
	if (i == 0) {
		tmp->next = NULL;
	}
	else {
		tmp->next = tmp->next->next;
	}
}

void traverse(struct Node * tmp) {
	for(; tmp != NULL; tmp = tmp->next) {
		printf("%s\n",tmp->data);
	}
}

int main() {
// Creating lists
	struct Node * HEAD = create("HEAD");
	struct Node * l1 = create("list 1");
	struct Node * l2 = create("list 2");
	struct Node * l3 = create("list 3");
	
// Creating link between lists
	link(HEAD, l1);
	link(l1, l2);
	link(l2, l3);

// Inserting lists
	struct Node * l4 = insert(l1, "list 4");
	struct Node * l5 = insert(l2, "list 5");
	struct Node * l6 = insert(l3, "list 6");

// Searching for value between lists
//	int pos = search(l1, "list 4");
//	printf("Position: %s\n",pos);

// Deleting lists
	delete(HEAD, "list 5");

// Traversing through linked lists
	traverse(HEAD);
	return 0;
}
