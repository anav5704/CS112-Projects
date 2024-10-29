#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// push_back(), insert(), pop() and erase() change vector size

int main()
{
    double median;

    vector<double> v = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    sort(v.begin(), v.end());

    if (v.size() % 2 == 0)
    {

        median = (v[v.size() / 2 - 1] + v[v.size() / 2]) / 2.0;
    }

    else
    {
        median = v[v.size() / 2];
    }

    cout << median << endl;

    return 0;
}