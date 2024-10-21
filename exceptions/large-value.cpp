#include <iostream>
using namespace std;

class Large
{
private:
    int num;

public:
    Large(int num)
    {
        this->num = num;
    }

    void printMessage()
    {
        cout << "The number: " << num << " is too large" << endl;
    }
};

int main()
{
    int x = 25, y = 51, MAX = 50;

    try
    {
        if (x > MAX)
        {
            throw Large(x);
        }

        if (y > MAX)
        {
            throw Large(y);
        }

        cout << "Result: " << x + y << endl;
    }

    catch (Large error)
    {
        error.printMessage();
        return 0;
    }

    return 0;
}
