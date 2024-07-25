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
		 * Insert node at begin of linked list: -
		 * -----------------------------------
		 *  1. Create a new node with a value.
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
		 * Insert node at end of linked list: -
		 * ---------------------------------
		 *  1. Assign that temporary node as HEAD.
		 *  2. Iterate until temporary's node pointing to NULL.
		 *  3. Increamenting to next node.
		 *  4. Assign temporary's next pointing to new node.
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
		 * Insert node at K-th position: -
		 * ----------------------------
		 *  1. Assign that temporary node as HEAD.
		 *  2. Assign count integer variable is equal to 0.
		 *  3. Iterate until temporary's node pointing to NULL and count is equal to position-1 and position > 0.
		 *  4. Increment count variable by 1 and increamenting to next node.
		 *  5. Assign new node next pointing to temporary's node next pointing node.
		 *  6. Assign temporary's next pointing to new node.
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
		/*
		 * Delete node at Kth position: -
		 * ---------------------------
		 *  1. Assign as temporary node as HEAD.
		 *  2. Create integer count varaible and assigne it 0
		 *  3. Iterate until temporary's node pointing next is equal to NULL and also count will be more than 0 and stop iterating at position-1.
		 *  4. Increament both count and temporary's node next.
		 *  5. Assign temporary's node next is equal to temporary's node next of next.
		 * */
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
		 *  1. Create a temporary node and assign as head node to temporay node.
		 *  2. Iterate until temporary's node next pointing to NULL.
		 *  3. Increamente temporary's node next
		 *  4. Print temporary's node value
		 *  5. Print NULL and newline character.
		 * */
		for(Node* tmp = head->next; tmp != NULL; tmp = tmp->next)
		{
			cout<<"["<<tmp->value<<"]-->";
		}
		cout<<"[NULL]"<<endl;
	}

	int count()
	{
		/*
		 * Counting number of nodes in linked list: -
		 * ---------------------------------------
		 *  1. Create a temporary node and assign HEAD node to temporary node.
		 *  3. Initialise count variable to 0.
		 *  4. Iterate until temporary's node next pointing to NULL.
		 *  5. Increamenting count variable by 1 and iterate to next node.
		 *  6. Return value of count variable.
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

class CircularLinkedList
{
	public:
	Node* head = new Node(-1);
	Node* tail = new Node(-1);
	
	void insertAtBegin(int value)
	{
		Node* newNode = new Node(value);
		if (head->next == NULL)
		{
			head->next = tail;
			newNode->next = head->next;
		}
		else
		{
			newNode->next = head->next;
		}
		head->next = newNode;
		tail->next = head;
	}

	void insertAtEnd(int value)
	{
		Node* newNode = new Node(value);
		Node* tmp = head;
		if (tmp->next == NULL)
		{
			newNode->next = tail;
			tmp->next = newNode;
		}
		else
		{
			while(tmp->next != tail)
			{
				tmp = tmp->next;
			}
			newNode->next = tmp->next;
			tmp->next = newNode;
		}
		tail->next = head;
	}

	void insertAtMid(int value, int position)
	{
	}

	void display()
	{
		for(Node* tmp = head->next; tmp != tail; tmp = tmp->next)
		{
			cout<<"["<<tmp->value<<"]-->";
		}
		cout<<"[NULL]"<<endl;
	}
};

int main()
{
	// Creating single linked list
	SingleLinkedList * list1 = new SingleLinkedList();
	list1->insertAtEnd(1);
	list1->insertAtEnd(2);
	list1->insertAtEnd(3);
	list1->insertAtEnd(4);
	list1->display();

	// Creating circular linked list
	CircularLinkedList * list2 = new CircularLinkedList();
	list2->insertAtEnd(11);
	list2->insertAtEnd(22);
	list2->insertAtEnd(33);
	list2->insertAtEnd(44);
	list2->display();

	return 0;
}
