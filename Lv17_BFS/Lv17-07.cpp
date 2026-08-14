#include <iostream>
#include <queue>
using namespace std;

int ary[] = {3, 7, 4, 2, 0, 9, 6, 0 };

struct Node
{
	int data;
	Node* left;
	Node* right;
};

Node* head = nullptr;

void BFS()
{
	if (head == nullptr)
		return;

	queue<Node*> q;

	q.push(head);

	while (!q.empty())
	{
		Node* cur = q.front();
		q.pop();

		cout << cur->data << ' ';

		if (cur->left != nullptr)
			q.push(cur->left);

		if (cur->right != nullptr)
			q.push(cur->right);
	}
}

int main()
{
	Node* nodes[8];
	for (int i = 0; i < 8; ++i)
	{
		nodes[i] = new Node();
		nodes[i]->data = ary[i];
		nodes[i]->left = nullptr;
		nodes[i]->right = nullptr;
	}

	for (int i = 0; i < 8; ++i)
	{
		int left = i * 2 + 1;
		int right = i * 2 + 2;

		if (left < 8 && nodes[left]->data != 0)
			nodes[i]->left = nodes[left];

		if (right < 8 && nodes[right]->data != 0)
			nodes[i]->right = nodes[right];
	}

	head = nodes[0];
	BFS();

	return 0;
}