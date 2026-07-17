#include <iostream>

using namespace std;

struct Node
{
	char c;
	Node* next;
};

int main()
{
	char input[5];
	for (size_t i = 0; i < 5; ++i)
		cin >> input[i];

	Node* head = nullptr;
	Node* tail = nullptr;

	for (size_t i = 0; i < 5; ++i)
	{
		if (head == nullptr)
		{
			head = new Node();
			head->c = input[i];
			head->next = nullptr;

			tail = head;
		}
		else
		{
			tail->next = new Node();
			tail->next->c = input[i];
			tail->next->next = nullptr;

			tail = tail->next;
		}
	}

	cout << tail->c << endl;

	return 0;
}