#include <iostream>
using namespace std;

class Base
{
public:
    // Pure virtual function
    virtual void Print() = 0;
};

class Derived : public Base
{
public:
    // Compiling without this will throw an error
    void Print()
    {
        cout << "Derived print" << endl;
    }
};

int main()
{
    Derived derived;
    derived.Print();

    return 0;
}