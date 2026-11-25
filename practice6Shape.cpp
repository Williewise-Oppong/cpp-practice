#include <iostream>
using namespace std;

class Shape{
    public:
    virtual void draw(){
        cout<<"Drawing a shape"<<endl;
    }
};

class Circle : public Shape{
    public:
    virtual void draw() override{
        cout<<"Drew circle"<<endl;
    }
};

class Rectangle : public Shape{
    public:
    virtual void draw(){
        cout<<"Drew Rectangle"<<endl;
    }
};


int main(){
    Circle c;
    Rectangle r;

    Shape* s1 = &c;
    Shape* s2 = &r;

    c.draw();
    r.draw();

    s1->draw();
    s2->draw();

    return 0;
}