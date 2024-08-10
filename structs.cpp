#include<iostream>
using namespace std;

struct Trait {
    string name;
};

struct Minion {
    string name;
    Trait trait;
    string greet() const {
        return "Hi, my name is " + name;
    }
};

int main(){
    const int MINIONS = 3;

    Minion a;
    a.name = "Bob";
    a.trait.name = "Cute";

    Minion b;
    b.name = "Kevin";
    b.trait.name = "Smart";

    Minion c;
    c.name = "Stuart";
    c.trait.name = "Cool";

    const Minion minions[MINIONS] = {a, b, c};

    for(int i = 0; i < MINIONS; i++){
        cout << "Name: " << minions[i].name << endl;
        cout    << "Trait: " << minions[i].trait.name << endl;
        cout << "Greeting: " << minions[i].greet() << endl;
        cout << endl;
    }

    return 0;
}
