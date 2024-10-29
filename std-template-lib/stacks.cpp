#include <iostream>
#include <stack>

using namespace std;

int main()
{
    const int SIZE = 10;

    stack<int> s, t;

    for (int i = 0; i < SIZE; i++)
    {
        s.push(i);
    }

    while (!s.empty())
    {
        cout << s.top() << " ";
        t.push(s.top());
        s.pop();
    }

    while (!t.empty())
    {
        s.push(t.top());
        t.pop();
    }

    return 0;
}