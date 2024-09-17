#include <iostream>
using namespace std;

class Bottle
{
public:
    int water;

    Bottle() {}

    Bottle(int water)
    {
        Bottle::water = water;
    }

    Bottle operator+(Bottle bottle)
    {
        Bottle temp;

        temp.water = water + bottle.water;

        return temp;
    }

    Bottle operator-(Bottle bottle)
    {
        Bottle temp;

        temp.water = water - bottle.water;

        return temp;
    }

    void operator+=(Bottle bottle)
    {
        water += bottle.water;
    }

    // int in parameter is used to differentiate between pre-increment and post-increment
    void operator++(int)
    {
        water += 100;
    }
};

int main()
{
    Bottle b1(250);
    Bottle b2(250);
    Bottle b3(500);

    Bottle b4 = b1 + b2;
    b4 += b3;
    b4++;

    cout << "Water in bottle 4: " << b4.water << "ml" << endl;

    return 0;
}