#include <iostream>
using namespace std;

class Vehicle{
    public:
    virtual void accelerate() = 0;
    virtual string fuelType() = 0;
};

class Car: public Vehicle{
    string fType;
    public:
    Car(){}
    Car(string f):fType(f){}
    virtual void accelerate() override{
        cout<<"Car engine revs"<<endl;
    }
    virtual string fuelType() override {
        return fType;
    }
};

class Bicycle : public Vehicle{
    string fType;
    public:
    Bicycle(){}
    Bicycle(string f):fType(f){}
    virtual void accelerate() override{
        cout<<"Pedalling faster"<<endl;
    }
    virtual string fuelType() override{
        return fType;
    }
};

int main(){
    Vehicle* v1 = new Car("Petrol");
    Vehicle* v2 = new Bicycle("Human power");

    v1->accelerate();
    cout<<v1->fuelType()<<endl;
    v2->accelerate();
    cout<<v2->fuelType()<<endl;

    delete v1;
    delete v2;
    return 0;
}