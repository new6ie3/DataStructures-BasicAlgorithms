#include <iostream>

using namespace std;

struct Node
{
	int age;
	Node* next1;
	Node* next2;
};

int main()
{
	Node man1 = { 25, nullptr,nullptr };
	Node man2 = { 40, nullptr,nullptr };
	Node man3 = { 38, nullptr,nullptr };

	Node woman1 = { 29, &man1, &man2 };
	Node woman2 = { 30, &woman1, &man3 };
	
	Node simson = { 20, &woman1, &woman2 };
	Node* head = &simson;

	return 0;
}