#include<iostream>
using namespace std;

struct Engine {
    char type;
    int cylinders;

    Engine();
    Engine(char type, int cylinders);
};

class Car {
    private:
        string name;
        Engine engine;

    public:
        Car(string name, Engine engine);
        ~Car();

        void setName(string name);
        string getName();

        void setEngine(Engine engine);
        Engine getEngine();

        void printDetails();
};

Engine::Engine(){
    cylinders = 0;
    type = '0';
}

Engine::Engine(char type, int cylinders){
    this->type = type;
    this->cylinders = cylinders;
}

Car::Car(string name, Engine engine){
    this->name = name;
    this->engine.type = engine.type;
    this->engine.cylinders = engine.cylinders;
}

Car::~Car(){
    cout << "Car deleted" << endl;
}

void Car::setName(string name){
    this->name = name;
}

string Car::getName(){
    return name;
}

void Car::setEngine(Engine engine){
    this->engine.type = engine.type;
    this->engine.cylinders = engine.cylinders;
}

Engine Car::getEngine(){
    return engine;
}

void Car::printDetails(){
    cout << "Car name: " << getName()  << endl;
    cout << "Engine type: " << getEngine().type << endl;
    cout << "Engine cylinders: " << getEngine().cylinders << endl;
}

int main(){
    Car car("Chevrolet Corvette",  Engine('V', 12));
    car.printDetails();
    return 0;
}
