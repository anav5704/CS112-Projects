#include <iostream>
using namespace std;

template <class T>
class Queue
{
public:
    int maxSize, currentSize, headIndex, tailIndex;
    T *array;

    Queue(int maxSize)
    {
        this->maxSize = maxSize;
        array = new T[maxSize];
        currentSize = 0;
        headIndex = 0;
        tailIndex = 0;
    }

    ~Queue()
    {
        delete[] array;
    }

    void enqueue(T data)
    {
        if (isFull())
        {
            cout << "Queue full" << endl;
            return;
        }

        array[tailIndex] = data;

        tailIndex = ++tailIndex % maxSize;
        currentSize++;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue empty" << endl;
            return;
        }

        T data = array[headIndex];

        headIndex = ++headIndex % maxSize;
        currentSize--;
    }

    bool isFull()
    {
        return currentSize == maxSize;
    }

    bool isEmpty()
    {
        return currentSize == 0;
    }
};

int main()
{
    Queue<int> *queue = new Queue<int>(3);

    queue->enqueue(1);
    queue->enqueue(2);
    queue->enqueue(3);

    queue->dequeue();
    queue->dequeue();

    queue->enqueue(4);
    queue->enqueue(5);

    delete queue;

    return 0;
}