#include <iostream>
using namespace std;

// Both classes need to be defined before the implementation of the friend function

class Password;

class Owner
{
public:
    Owner() {}

    string getPassword(Password password);
};

class Password
{
private:
    string value;

public:
    Password()
    {
        value = "<3";
    }

    friend string Owner::getPassword(Password password);
};

// This comes last, else the code won't compile
string Owner::getPassword(Password password)
{
    return password.value;
}

int main()
{
    Password Password;
    Owner owner;

    cout << "Password: " << owner.getPassword(Password) << endl;

    return 0;
}
