#include <iostream>

using namespace std;

struct Node
{
	char data;
	Node* next;
};

Node* head = nullptr;

void AddNode(char data)
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

	for (int i = 0; i < 4; ++i)
		AddNode(input + i + 54);

	for (Node* p = head; p != nullptr; p = p->next)
		cout << p->data << ' ';

	return 0;
}