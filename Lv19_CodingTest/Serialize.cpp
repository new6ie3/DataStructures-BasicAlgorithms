#include <iostream>
#include <vector>
using namespace std;

class Tree
{
public:
	Tree(vector<int> vec)
	{
		for (int i = 0; i < vec.size(); ++i)
		{
			Node* node = new Node();

			node->num = vec[i];
			node->left = nullptr;
			node->right = nullptr;

			nodes.push_back(node);
		}

		root = nodes[0];

		for (int i = 0; i < nodes.size(); ++i)
		{
			int left = i * 2 + 1;
			int right = i * 2 + 2;

			if (left < nodes.size())
				nodes[i]->left = nodes[left];

			if (right < nodes.size())
				nodes[i]->right = nodes[right];
		}
	}

	void Serailize()
	{
		for (Node* p : nodes)
			cout << p->num << ' ';
	}

private:
	struct Node
	{
		int num;
		Node* left;
		Node* right;
	};
	
	Node* root;
	vector<Node*> nodes;
};


int main()
{
	Tree tree = { { 1, 2, 3, 0, 0, 4, 5 } };
	tree.Serailize();

	return 0;
}