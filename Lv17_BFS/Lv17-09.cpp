#include <iostream>

using namespace std;

struct Node
{
	int num;
};

Node* head;

int main()
{
	int n;
	cin >> n;

	Node* queue[6] = {};

	int sum = 0;
	for (int i = 0; i < n + 1; ++i)
	{
		queue[i] = new Node();
		
		if(i == 0)
			queue[i]->num = 1;
		else
			queue[i]->num = queue[i - 1]->num * 3;

		sum += queue[i]->num;
	}

	head = queue[0];
	cout << sum;

	return 0;
}