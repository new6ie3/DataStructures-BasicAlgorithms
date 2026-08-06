#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void Enqueue(int data)
{
	Node* node = new Node();
	node->data = data;
	node->next = nullptr;

	if (head == nullptr)
	{
		head = node;
		tail = node;
	}
	else
	{
		tail->next = node;
		tail = node;
	}
}

void Dequeue()
{
	if (head == nullptr)
		return;

	Node* victim = head;
	head = head->next;
	
	cout << victim->data;
	delete victim;
}

int main()
{
	Node queue[10];
	
	for (int x = 0; x < 5; ++x)
	{
		Enqueue(1);
		Enqueue(2);
		Enqueue(3);
		Dequeue();
		Dequeue();
		Dequeue();
	}

	return 0;
}