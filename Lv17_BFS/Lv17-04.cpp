#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
};

Node* nodes[7];
Node* head = nullptr;

int sum = 0;
void DFS(Node* node, int level = 0)
{
	if (level == 2)
	{
		sum += node->data;
		return;
	}

	DFS(node->left, level + 1);
	DFS(node->right, level + 1);
}

int main()
{
	for (int i = 0; i < 7; ++i)
	{
		nodes[i] = new Node();
		nodes[i]->left = nullptr;
		nodes[i]->right = nullptr;
		cin >> nodes[i]->data;
	}

	for (int i = 0; i < 7; ++i)
	{
		nodes[i]->left = nodes[i * 2 + 1];
		nodes[i]->right = nodes[i * 2 + 2];
	}

	head = nodes[0];
	DFS(head);
	cout << sum;

	return 0;
}