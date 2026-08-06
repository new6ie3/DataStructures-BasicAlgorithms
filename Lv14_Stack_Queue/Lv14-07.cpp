#include <iostream>

using namespace std;

struct Node
{
	int x;
	char y;
	Node* next;
};

Node* head = nullptr;

void AddNode(int _x, char _y)
{
	Node* node = new Node();
	node->x = _x;
	node->y = _y;
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

void Pop()
{
	if (head == nullptr)
		return;

	Node* victim = head;
	head = head->next;

	cout << victim->x << ' ' << victim->y << endl;
	delete victim;
}

int main()
{
	size_t size = 3;
	cin >> size;

	for (size_t i = 0; i < size; ++i)
		AddNode(i + 1, i + 'A');

	for (size_t i = 0; i < size; ++i)
		Pop();

	return 0;
}