#include <iostream>
using namespace std;

template <class Type>
class Stack
{
public:
    int size;
    int head;
    Type *array;

    Stack(int size)
    {
        this->size = size;
        array = new Type[size];
        head = -1;
    }

    bool isFull()
    {
        return head == (size - 1);
    }

    bool push(Type data)
    {
        if (isFull())
        {
            return false;
        }

        array[++head] = data;
        return true;
    }

    bool pop()
    {
        if (isFull())
        {
            return false;
        }

        Type data = array[head--];
        return true;
    }
};

int main()
{

    Stack<int> stack(5);

    for (int i = 0; i < stack.size; i++)
    {
        stack.push(i * 2);
        cout << stack.array[i] << " ";
    }

    for (int i = 0; i < stack.size; i++)
    {
        cout << stack.array[i] << " ";
    }

    return 0;
}