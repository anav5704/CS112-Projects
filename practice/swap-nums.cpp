#include<iostream>
using namespace std;

void swapNums(int& num1, int& num2, int& num3){
    int temp;
    temp = num1;

    num1 = num2;
    num2 = num3;
    num3 = temp;
}

int main() {
    int num1 = 1, num2 = 2, num3 = 3;

    cout << "Before swap:" << endl;
    cout << "num 1: " << num1 << endl;
    cout << "num 2: " << num2 << endl;
    cout << "num 3: " << num3 << endl;

    swapNums(num1, num2, num3);

    cout << "\nAfter swap:" << endl;
    cout << "num 1: " << num1 << endl;
    cout << "num 2: " << num2 << endl;
    cout << "num 3: " << num3 << endl;

    return 0;
}
