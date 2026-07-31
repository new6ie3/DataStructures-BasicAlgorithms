#include <iostream>

using namespace std;

template <typename T>
class Vector
{
public:
    Vector() : size(0), capacity(5)
    {
        datas = new T[capacity];
    }

    ~Vector()
    {
        delete[] datas;
    }

    void push_back(const T& data)
    {
        if (size == capacity)
        {
            capacity *= 2;

            T* newDatas = new T[capacity];

            for (size_t i = 0; i < size; ++i)
                newDatas[i] = datas[i];

            delete[] datas;
            datas = newDatas;
        }

        datas[size++] = data;
    }

    void resize(size_t newSize, const T& value = T())
    {
        if (newSize <= size)
        {
            size = newSize;
            return;
        }

        if (newSize > capacity)
        {
            capacity = newSize * 2;

            T* newDatas = new T[capacity];

            for (size_t i = 0; i < size; ++i)
                newDatas[i] = datas[i];

            delete[] datas;
            datas = newDatas;
        }

        for (size_t i = size; i < newSize; ++i)
            datas[i] = value;

        size = newSize;
    }

    void insert(size_t index, const T& value)
    {
        if (index > size)
            return;

        if (size == capacity)
        {
            capacity *= 2;

            T* newDatas = new T[capacity];

            for (size_t i = 0; i < size; ++i)
                newDatas[i] = datas[i];

            delete[] datas;
            datas = newDatas;
        }

        for (size_t i = size; i > index; --i)
            datas[i] = datas[i - 1];

        datas[index] = value;
        size++;
    }

    T& operator[](size_t index) const { return datas[index]; }
    size_t Size() const { return size; }
    size_t Capacity() const { return capacity; }
    bool empty() const { return size == 0; }
    void Clear() { size = 0; }

private:
    T* datas;
    size_t size;
    size_t capacity;
};

int main()
{
    Vector<int> vec;

    for (int i = 1; i <= 5; ++i)
        vec.push_back(i);

    vec.resize(10, 99);

    for (size_t i = 0; i < vec.Size(); ++i)
        cout << vec[i] << ' ';

    cout << endl;

    vec.resize(3);

    for (size_t i = 0; i < vec.Size(); ++i)
        cout << vec[i] << ' ';
    cout << endl;

    vec.insert(1, 100);

    for (size_t i = 0; i < vec.Size(); ++i)
        cout << vec[i] << ' ';

    return 0;
}