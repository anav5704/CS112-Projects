#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> v = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    // Swap all elements for the first half

    for (int i = 0; i < v.size() / 2; i++)
    {
        int temp = v[i];
        v[i] = v[v.size() - 1 - i];
        v[v.size() - 1 - i] = temp;
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }

    return 0;
}