#include <iostream>
using namespace std;

//------------ Base Class Definition ------------//

class Base
{
private:
    // Can only be accessed from base class
    int z;

protected:
    // Can only be accessed from derived class
    int y;

public:
    // Can be accessed from anywhere
    int x;

    Base();
    Base(int x, int y, int z);
    void setZ(int z);
    int getZ();
    void print();
};

//------------ Base Class Implementation ------------//

Base::Base() {};

Base::Base(int x, int y, int z)
{
    Base::x = x;
    Base::y = y;
    Base::z = z;
}

void Base::setZ(int z)
{
    Base::z = z;
}

int Base::getZ()
{
    return z;
}

void Base::print()
{
    cout << x << " " << y << " " << z << endl;
}

//------------ Derived Class Definition ------------//

class Derived : public Base
{
public:
    Derived(int x, int y, int z);
    void print();
};

//------------ Derived Class Implementation ------------//

Derived::Derived(int x, int y, int z)
{
    Base::x = x;
    Base::y = y;
    Base::setZ(z);
}

void Derived::print()
{
    cout << x << " " << y << " " << Base::getZ() << endl;
}

int main()
{
    Base base(1, 2, 3);
    base.print();

    Derived derived(1, 2, 3);
    derived.print();

    return 0;
}