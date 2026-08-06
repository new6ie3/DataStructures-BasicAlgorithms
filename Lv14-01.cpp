#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* head = nullptr;

void AddNode(int data)
{
	Node* node = new Node();
	node->data = data;
	node->next = nullptr;

	if (head == nullptr)
	{
		head = node;
	}
	else
	{
		for (Node* p = head; p != nullptr; p = p->next)
		{
			if (p->next != nullptr)
				continue;

			p->next = node;
			break;
		}
	}
}

int main()
{
	int input;
	cin >> input;

	for (int i = 1; i <= 4; ++i)
		AddNode(i * input);

	Node* p = head;
	while (p != nullptr)
	{
		cout << p->data << ' ';
		p = p->next;
	}

	return 0;
}