#include <iostream>
#include <queue>

using namespace std;

int main()
{
    const int SIZE = 10;

    queue<int> q, t;

    for (int i = 0; i < SIZE; i++)
    {
        q.push(i);
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        t.push(q.front());
        q.pop();
    }

    while (!t.empty())
    {
        q.push(t.front());
        t.pop();
    }

    return 0;
}