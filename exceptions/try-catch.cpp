#include <iostream>
using namespace std;

int main()
{
    double x, y, result, zero = 0.0;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    try
    {
        if (y == 0)
        {
            throw zero;
        }

        result = x / y;
    }

    catch (double error)
    {
        if (error == zero)
        {
            cout << "Cannot divide by 0" << endl;
            return 0;
        }
    }

    cout << "Result: " << result << endl;

    return 0;
}