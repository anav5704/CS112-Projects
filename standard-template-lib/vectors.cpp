#include <iostream>
#include <vector>

using namespace std;

// push_back(), insert(), pop() and erase() change vector size

int main()
{
    const int SIZE = 10;

    vector<int> v(SIZE);

    for (int i = 0; i < v.size(); i++)
    {
        v[i] = i * 10;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    v.clear();

    return 0;
}