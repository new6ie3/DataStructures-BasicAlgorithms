#include <iostream>

using namespace std;

char str[10];

struct Node
{
	char data;
	Node* left;
	Node* right;
};

void Print_Data(Node* head)
{
	if (strcmp(str, "H") == 0)
	{
		cout << head->data;
		return;
	}

	if (strcmp(str, "HR") == 0)
	{
		cout << head->right->data;
		return;
	}

	if (strcmp(str, "HL") == 0)
	{
		cout << head->left->data;
		return;
	}

	if (strcmp(str, "HLL") == 0)
	{
		cout << head->left->left->data;
		return;
	}

	if (strcmp(str, "HLR") == 0)
	{
		cout << head->left->right->data;
		return;
	}
}

int main()
{
	cin >> str;

	Node* head = new Node();
	head->data = 'A';

	head->left = new Node();
	head->left->data = 'B';

	head->right = new Node();
	head->right->data = 'C';

	head->left->left = new Node();
	head->left->left->data = 'D';

	head->left->right = new Node();
	head->left->right->data = 'E';

	Print_Data(head);
	
	delete head->left->right;
	head->left->right = nullptr;
	
	delete head->left->left;
	head->left->left = nullptr;

	delete head->left;
	head->left = nullptr;

	delete head->right;
	head->right = nullptr;

	delete head;
	head = nullptr;

	return 0;
}