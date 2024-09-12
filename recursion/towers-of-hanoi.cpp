#include <iostream>
using namespace std;

void TowersOfHanoi ( int disks, char from,char to, char spare )
{
    if(disks == 1){
        cout << "Moved disk " << disks << " from stack " << from << " to stack " << to << endl;
    }

    else
    {
        TowersOfHanoi(disks - 1, from, spare, to);
        cout << "Moved disk " << disks << " from stack " << from << " to stack " << to << endl;
        TowersOfHanoi(disks - 1, spare, to, from);
    }
}


int main()
{
      TowersOfHanoi(5,'F','T','S');
      return 0;
}
