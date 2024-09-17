#include <iostream>
using namespace std;

class Base
{
public:
    void Print()
    {
        cout << "Base print" << endl;
    }

    void Print(int x)
    {
        cout << "Base print: " << x << endl;
    }

    void Print(int x, int y)
    {
        cout << "Base print: " << x << " " << y << endl;
    }
};

class Derived : public Base
{
public:
    // Un-hides void Print(int x, int y)
    using Base::Print;

    void Print()
    {
        cout << "Derived  print" << endl;
    }

    void Print(int x)
    {
        cout << "Derived print: " << x << endl;
    }
};

int main()
{
    Derived derived;

    derived.Print(5);
    derived.Print(5);
    derived.Print(5, 10);

    return 0;
}