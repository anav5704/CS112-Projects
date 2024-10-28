#include <iostream>
#include <vector>

using namespace std;

vector<int> addTwoVectors(vector<int> v1, vector<int> v2)
{
    vector<int> v3;

    for (int i = 0; i < v1.size(); i++)
    {
        v3.push_back(v1[i] + v2[i]);
    }

    return v3;
}

int main()
{
    vector<int> v1;
    vector<int> v2;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);

    vector<int> v3 = addTwoVectors(v1, v2);

    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << endl;
    }

    return 0;
}