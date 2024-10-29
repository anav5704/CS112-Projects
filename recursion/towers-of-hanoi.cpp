#include <iostream>
using namespace std;

void hanoi(int disks, char from, char to, char spare)
{
    if (disks > 0)
    {
        // Move n-1 disks from 'from' peg to 'spare' peg using 'to' peg
        hanoi(disks - 1, from, spare, to);

        // Move nth disk from 'from' peg to 'to' peg
        cout << "Move disk from " << from << " to " << to << endl;

        // Move n-1 disks from 'spare' peg to 'to' peg using 'from' peg
        hanoi(disks - 1, spare, to, from);
    }
}

int main()
{
    hanoi(5, 'F', 'T', 'S');

    return 0;
}
