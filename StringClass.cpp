#include <iostream>
#include <cstring>

using namespace std;

class Mystring
{
public:
    Mystring(const char* str)
    {
        size = strlen(str);
        capacity = (size * 2) + (size / 2);
        if (capacity == 0) capacity = 1;

        this->str = new char[capacity];
        memset(this->str, 0, capacity);
        memcpy(this->str, str, size + 1);
    }

    ~Mystring()
    {
        delete[] str;
    }

    void operator+= (const char* str)
    {
        int len = strlen(str);
        int newSize = size + len;

        if (newSize >= capacity)
        {
            capacity = (newSize * 2) + (newSize / 2);

            char* newStr = new char[capacity];
            memset(newStr, 0, capacity);
            memcpy(newStr, str, size);

            delete[] this->str;
            this->str = newStr;
        }

        memcpy(this->str + size, str, len + 1);
        size = newSize;
    }

    char& operator[] (int index) { return str[index]; }
    int Size() const { return size; }
    const char* c_str() const { return str; }

    void Clear() {  size = 0; }

    bool operator==(const Mystring& other)
    {
        if (size != other.size)
            return false;

        for (int i = 0; i < size; ++i)
        {
            if (str[i] != other.str[i])
                return false;
        }

        return true;
    }

    int Find(const char* other)
    {
        int len = strlen(other);

        if (len == 0)
            return 0;

        if (len > size)
            return -1;

        for (int i = 0; i <= size - len; ++i)
        {
            bool found = true;

            for (int j = 0; j < len; ++j)
            {
                if (str[i + j] != other[j])
                {
                    found = false;
                    break;
                }
            }

            if (found) 
                return i;
        }

        return -1;
    }

private:
    char* str;
    int size;
    int capacity;
};

int main()
{
    Mystring myString("Hello");
    cout << myString.c_str() << endl;

    myString += " World!";
    cout << myString.c_str() << endl;
    cout << myString.Size() << endl;

    int idx = myString.Find("World");
    bool result = (myString == "AAA");

    return 0;
}