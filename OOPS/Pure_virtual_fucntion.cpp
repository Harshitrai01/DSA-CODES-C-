#include<bits/stdc++.h>
using namespace std;

// Pure Virtual Functions

class Vehicle{      // this is an abstract class because it conatains pure virtual functions.
    public:
    string color;
    virtual void print()=0;  // pure virtual functions
};

// Car class has two options either to implement virtual functions or to stay as an abstract class.
class Car : public Vehicle{
    public:
        int numGears;

    void print(){
        cout<<"Car"<<endl;
    }
};

int main(){

    Vehicle v;
    // Car c;

    // v.print();
    // c.print(); // car print will be called.

    // Vehicle *v1=new Vehicle;
    // Vehicle *v2;
    // // v2=&v;

    // v2=&c;  // v2 is pointing to child class i.e car;
    // v1->print();
    // v2->print();  // using v2 we can only access functions of base class, not derived class.
    // // v2 is calling vehicles print function.

return 0;
}