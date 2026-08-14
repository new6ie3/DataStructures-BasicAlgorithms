#include <iostream>

using namespace std;

struct Node
{
	char data;
	Node* left;
	Node* right;
};

void DFS(Node** nodes, int n = 0)
{
	if (n >= 6)
		return;

	cout << nodes[n]->data;

	DFS(nodes, n * 2 + 1);
	DFS(nodes, n * 2 + 2);
}

int main()
{
	string input;
	cin >> input;

	Node* nodes[6];
	for (int i = 0; i < 6; ++i)
	{
		nodes[i] = new Node;
		nodes[i]->data = input[i];
		nodes[i]->left = nullptr;
		nodes[i]->right = nullptr;
	}

	for (int i = 0; i < 6; ++i)
	{
		int left = i * 2 + 1;
		int right = i * 2 + 2;

		nodes[i]->left = nodes[left];
		nodes[i]->right = nodes[right];
	}

	Node* head = nodes[0];

	DFS(nodes);

	for (int i = 0; i < 6; ++i)
		delete nodes[i];

	return 0;
}