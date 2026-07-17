#include <iostream>

using namespace std;

struct Node
{
	string name;
	Node* love1;
	Node* love2;
};


int main()
{

	Node* boss = new Node();
	boss->name = "boss";

	Node* wife = new Node();
	wife->name = "wife";

	Node* son = new Node();
	son->name = "son";

	Node* girlfriend = new Node();
	girlfriend->name = "girlfriend";

	Node* boyfriend = new Node();
	boyfriend->name = "boyfriend";

	boss->love1 = wife;
	boss->love2 = son;
	wife->love1 = boss;
	wife->love2 = son;
	son->love1 = girlfriend;
	son->love2 = boyfriend;
	girlfriend->love1 = son;
	girlfriend->love2 = boyfriend;
	boyfriend->love1 = girlfriend;

	Node* head = boss;
	cout << head->love2->love1->name << endl;
	cout << head->love2->love2->name << endl;

	delete boyfriend;
	delete girlfriend;
	delete son;
	delete wife;
	delete boss;

	return 0;
}