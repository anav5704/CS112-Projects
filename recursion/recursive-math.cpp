#include <iostream>
using namespace std;

int recursiveSum(int num) {
    if (num == 0) {
        return num;
    }

    else {
        return num + recursiveSum(num - 1);
    }
}

int recursiveFactorial(int num) {
    if (num == 1) {
        return num;
    }

    else {
        return num * recursiveFactorial(num - 1);
    }
}

int recursiveExponent(int base, int exponent) {
    if (exponent == 1) {
        return base;
    }

    else {
        return base * recursiveExponent(base, exponent - 1);
    }
}

int main() {   
    cout << "Sum: " << recursiveSum(10) << endl;
    cout << "Range: " << recursiveSum(10) - recursiveSum(5) << endl;
    cout << "Factorial: " << recursiveFactorial(5) << endl;
    cout << "Exponent: " << recursiveExponent(2, 5) << endl;
    return 0;
}
