#include<iostream>
using namespace std;

void handleInput(int& num, int& sum, int& counter, int& min, int& max){
    while(num != 0) {
        if(num < min) min = num;
        else if (num > max) max = num;

        sum += num;
        counter++;

        cout << "Enter number: ";
        cin >> num;
    }
}

int main() {
    int num = 0, sum = 0, counter = 0, min = 10000, max = -10000;

    cout << "Enter number: ";
    cin >> num;

    handleInput(num, sum, counter, min,max);

    cout << "Sum is: " << sum << endl;
    cout << "Count is: " << counter << endl;
    cout << "Min is: " << min << endl;
    cout << "Max is: " << max << endl;

    return 0;
}
