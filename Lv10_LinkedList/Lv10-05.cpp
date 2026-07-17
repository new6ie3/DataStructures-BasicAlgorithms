#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* next;
};

int main()
{
	Node* head = new Node();
	head->data = 3;

	head->next = new Node();
	head->next->data = 5;

	head->next->next = new Node();
	head->next->next->data = 4;

	head->next->next->next = new Node();
	head->next->next->next->data = 2;

	Node* current = head;
	while (current)
	{
		cout << current->data << ' ';
		current = current->next;
	}

	delete head->next->next->next;
	head->next->next->next = nullptr;

	delete head->next->next;
	head->next->next = nullptr;

	delete head->next;
	head->next = nullptr;

	delete head;
	head = nullptr;

	return 0;
}