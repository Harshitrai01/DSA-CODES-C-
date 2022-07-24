#include<bits/stdc++.h>
using namespace std;

// Runtime Polymorphism
// Virtual Functions

class Vehicle{
    public:
    string color;
    virtual void print(){   // due to this virtual v2 will print car class print()
        cout<<"Vehicle"<<endl;
    }
};

class Car : public Vehicle{
    public:
        int numGears5;

    void print(){
        cout<<"Car"<<endl;
    }
};

int main(){

    Vehicle v;
    Car c;

    v.print();
    c.print(); // car print will be called.

    Vehicle *v1=new Vehicle;
    Vehicle *v2;
    // v2=&v;

    v2=&c;  // v2 is pointing to child class i.e car;
    v1->print();
    v2->print();  // using v2 we can only access functions of base class, not derived class.
    // v2 is calling vehicles print function.

return 0;
}