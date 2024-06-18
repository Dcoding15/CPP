#include<iostream>
using namespace std;

// Creating node class
class Node
{
	public:
	int value;			// Default value for every node = 0
	Node* next = NULL;	// Default address for every node = NULL
	Node(int value = 0)
	{
		this->value = value;
		this->next = next;
	};
};

// Creating linked list class
class SingleLinkedList
{
	public:
	Node* head = new Node(-1);	// HEAD points to begin of linked list
	
	void insertAtBegin(int value)
	{
		/*
		 * Inserting node at begin of linked list: -
		 * --------------------------------------
		 *  1. Create a new node.
		 *  2. Assign address of new node to HEAD's node next pointing node.
		 *  3. Assign HEAD's next pointing to new node.
		 * */
		Node* newNode = new Node(value);
		newNode->next = head->next;
		head->next = newNode;
	}

	void insertAtEnd(int value)
	{
		/*
		 * Inserting node at end of linked list: -
		 * ------------------------------------
		 *  1. Create a temporary node, so that it can iterate through end of linked list.
		 *  2. Create a new node.
		 *  3. Assign that temporary node as HEAD.
		 *  4. Iterate until temporary's node pointing to NULL.
		 *  5. Increamenting to next node.
		 *  6. Assign temporary's next pointing to new node.
		 * */
		Node* newNode = new Node(value);
		Node* tmp = head;
		while(tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newNode;
	}

	void insertAtMid(int value, int position)
	{
		/*
		 * Inserting node at K-th position of linked list: -
		 * ----------------------------------------------
		 *  1. Create a temporary node, so that it can iterate through end of linked list.
		 *  2. Create a new node.
		 *  3. Assign that temporary node as HEAD.
		 *  4. Assign count integer variable is equal to 0.
		 *  5. Iterate until temporary's node pointing to NULL and count is equal to position-1 and position > 0.
		 *  6. Increment count variable by 1 and increamenting to next node.
		 *  7. Assign new node next pointing to temporary's node next pointing node.
		 *  8. Assign temporary's next pointing to new node.
		 * */
		Node* newNode = new Node(value); 
		Node* tmp = head;
		int count = 0;
		while(tmp->next != NULL and count != position-1 and position > 0)
		{
			count++;
			tmp = tmp->next;
		}
		newNode->next = tmp->next;
		tmp->next = newNode;
	}

	void deleteAtBegin()
	{
		/*
		 * Delete node at beginning: -
		 * ------------------------
		 *  1. Assign HEAD's next node to HEAD's next node's next.
		 * */
		head->next = head->next->next;
	}

	void deleteAtEnd()
	{
		/*
		 * Delete node at ending: -
		 * ---------------------
		 *  1. Assign that temporary node as HEAD.
		 *  2. Iterate until temporary's node pointing next of next node is equal to NULL.
		 *  3. Increment tmp variable  to next node.
		 *  4. Assign temporary's next node is NULL.
		 * */
		Node* tmp = head;
		while(tmp->next->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = NULL;
	}

	void deleteAtMid(int position)
	{
		/**/
		Node* tmp = head;
		int count = 0;
		while(tmp->next != NULL and  count != position-1 and count > 0)
		{
			count++;
			tmp = tmp->next;
		}
		tmp->next = tmp->next->next;
	}

	void display()
	{
		/*
		 * Display linked list: -
		 * -------------------
		 *  1. Create a temporary node, so that it can iterate through end of linked list.
		 *  2. Assign HEAD node to temporary node.
		 *  3. Iterate until temporary's node next pointing to NULL.
		 *  4. Increamenting to next node and also temporary node value.
		 * */
		Node* tmp = head;
		while(tmp->next != NULL)
		{
			tmp = tmp->next;
			cout<<"["<<tmp->value<<"]-->";
		}
		cout<<"[NULL]"<<endl;
	}

	int count_linked_list()
	{
		/*
		 * Counting number of nodes in linked list: -
		 * ---------------------------------------
		 *  1. Create a temporary node, so that it can iterate through end of linked list
		 *  2. Assign HEAD node to temporary node.
		 *  3. Initialise count variable to 0.
		 *  4. Iterate until temporary's node next pointing to NULL.
		 *  5. Increamenting count variable by 1 and iterate to next node.
		 * */
		Node* tmp = head;
		int count = 0;
		while(tmp->next != NULL)
		{
			count++;
			tmp = tmp->next;
		}
		return count;
	}
};

int main()
{
	// Creating single linked list
	SingleLinkedList* list1 = new SingleLinkedList();
	list1->insertAtEnd(1);
	list1->insertAtEnd(2);
	list1->insertAtEnd(3);
	list1->insertAtEnd(4);
	list1->display();

	// Creating doubly linked list
	DoublyLinkedList list2 = new DoublyLinkedList();
}
