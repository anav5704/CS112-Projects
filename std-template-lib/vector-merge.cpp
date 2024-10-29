#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3}, v2 = {4, 5, 6}, v3;

    v3.insert(v3.begin(), v1.begin(), v1.end());
    v3.insert(v3.end(), v2.begin(), v2.end());

    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }

    return 0;
}