#include <iostream>
using namespace std;

int main()
{
    char anav[] = "Anav";   // char[]
    char chand[] = "Chand"; // char[]

    char *names[] = {anav, chand}; // char* []

    // char anav[5] decays to char* and points to memory address of 'A'
    // char chand[6] decays to char* and points to memory address of 'C'

    cout << names[0] << " " << names[1] << endl;

    return 0;
}