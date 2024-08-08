#include<iostream>
using  namespace std;

int main ()
{
    int intArray[] = {1, 2, 3, 4, 5};
    char stringArray[] = "Hello World";
    char copyArray[11];
    int i = 0;

    cout << "Int Array: " << intArray << endl;
    cout << "String Array: " << stringArray << endl;
    cout << "Copy Array: " << copyArray << endl;

    while((copyArray[i] = stringArray[i]) != '\0') i++;

    cout << "Copy Array: " << copyArray << endl;

    return 0;
}
