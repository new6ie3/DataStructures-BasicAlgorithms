#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
};

int main()
{
	Node* head = new Node();
	head->data = 3;

	head->left = new Node();
	head->left->data = 7;

	head->right = new Node();
	head->right->data = 6;

	head->right->left = new Node();
	head->right->left->data = 2;

	delete head->right->left;
	head->right->left = nullptr;

	delete head->right;
	head->right = nullptr;

	delete head->left;
	head->left = nullptr;
	
	delete head;
	head = nullptr;

	return 0;
}