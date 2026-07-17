#include <iostream>

using namespace std;

struct Node
{
	int x;
	Node* next;
};

int main()
{
	Node a = {3, nullptr};
	Node b = {5, nullptr};
	Node c = {4, nullptr};

	a.next = &b;
	a.next->next = &c;

	return 0;
}