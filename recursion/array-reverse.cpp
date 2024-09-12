#include <iostream>
using namespace std;

string reverseString(string a, string b, int i)
{
    if (a.size() == b.size())
    {
        return b;
    }

    b += a.substr(a.size() - i, 1);

    return reverseString(a, b, i + 1);
}

int main()
{
    string a = "Normal string";

    cout << "Normal string: " << a << endl;
    cout << "Reversed string: " << reverseString(a, "", 1) << endl;

    return 0;
}