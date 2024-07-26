#include<iostream>
using namespace std;

int getGCD(int a, int b){
    while(b != 0){
        if(a > b){
            a = a - b;
        }
        else {
            b = b - a;
        }
    }

    return a;
}

void reduceFraction(int numerator, int denominator, int & reducedNumerator, int& reducedDenominator){
    int gcd = getGCD(numerator, denominator);
    reducedNumerator = numerator / gcd;
    reducedDenominator = denominator / gcd;
}

int main(){
    int numerator = 0, denominator = 0, reducedNumerator = 0, reducedDenominator = 0;

    cout << "Enter the numerator: ";
    cin >> numerator;

    cout << "Enter the denominator: ";
    cin >> denominator;

    reduceFraction(numerator, denominator, reducedNumerator, reducedDenominator);

    cout << "The reduced fraction is: " << reducedNumerator << " / " << reducedDenominator << endl;

    return 0;
}
