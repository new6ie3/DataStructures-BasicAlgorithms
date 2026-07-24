#include <iostream>
#include <print>
#include <vector>
#include <list>

namespace ya
{
    template <typename T>
    class list
    {
    public:
        struct Node
        {
            T data;      
            Node* back;  
        };

        list()
        {
            mHead = nullptr;
            mTail = nullptr;
        }

        ~list()
        {
            Node* current = mHead;
            while (current != nullptr)
            {
                Node* next = current->back;
                delete current;
                current = next;
            }

            mHead = nullptr;
            mTail = nullptr;
        }

        void push_back(T data)
        {
            if (mHead == nullptr)  // 첫 번째 노드
            {
                mHead = new Node();
                mHead->data = data;
                mHead->back = nullptr;
                mTail = mHead;
            }
            else  // 기존 노드가 있는 경우
            {
                mTail->back = new Node();
                mTail->back->data = data;
                mTail->back->back = nullptr;
                mTail = mTail->back;
            }
        }

    private:
        Node* mHead;  
        Node* mTail;  
    };
}

int main()
{
    ya::list<int> intList;  

    intList.push_back(1);
    intList.push_back(2);

    std::list<int> stdList;

    stdList.push_back(1);
    stdList.push_back(2);


    return 0;
}
