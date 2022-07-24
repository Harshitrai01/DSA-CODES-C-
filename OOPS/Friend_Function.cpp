#include<bits/stdc++.h>
using namespace std;

// friend function

class Bus{
    public:
        void print();
};

void test();

class Truck{
    private:
        int x;

    protected:
        int y;

    public:
        int z;
    
    // Creating print of Bus as friend of truck
    friend void Bus :: print();
    // Now this function can acess each private and protected 
    // property of truck class.

    // Global function accessing truck private
    friend void test();
    
    // We can put friend functions in acess modifires, they will work similar.
    // Friend functions can not acess this of the class.

    // If Bus has more functions like print1(), print2(), print3();
    // We want to make all functions of bus class a friend of truck
    // We can use following syntax;

    friend class Bus;
    // Bus can access trucks private but truck can't acess bus private.
    // Because Truck is friend of Bus, but Bus is not friend of truck.
};

// If we are making any function as friend of class
// we have to define it outside of the class.

void Bus :: print(){
    Truck t;
    t.x=10;
    t.y=20;
    cout<<t.x<<" "<<t.y<<endl;
}

// Global Function Acessing Truck Private
void test(){
    // Acess truck private
    Truck t;
    t.x=10;
    t.y=20;
    cout<<t.x<<" "<<t.y<<endl;

}
int main(){

    Bus b;
    b.print();
    test();

return 0;
}