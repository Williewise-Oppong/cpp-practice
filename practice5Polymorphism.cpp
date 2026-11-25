#include <iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"Animal makes a sound"<<endl;
    }
};

class Dog : public Animal{
    public:
    void speak(){
        cout<<"Dog barks"<<endl;
    }
};

class Cat : public Animal{
    public:
    void speak(){
        cout<<"Cat meows"<<endl;
    }
};

int main(){
    Dog d;
    Cat c;

    Animal* a1 = &d;
    Animal* a2 = &c;

    d.speak();
    c.speak();
    
    a1->speak();
    a2->speak();

    return 0;
}