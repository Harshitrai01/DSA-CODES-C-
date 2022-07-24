#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    private:
        int maxSpeed;

    protected:
        int numTyres;

    public:
        string color; 
    
    void print(){
        cout<<"Vehicle"<<endl;
    }

    Vehicle(){
        cout<<"Constructor of Vehicle is called."<<endl;
    }

    ~Vehicle(){
        cout<<"Destructor of Vehicle is called."<<endl;
    }

    Vehicle(int z){
        cout<<"Parametrized Constructor of Vehicle is called."<<endl;
        maxSpeed=z;
    }
};

// avoiding copies in hybrid inheritance
// class Car: virtual public Vehicle
class Car: public Vehicle{
    public:
        int numGears;

    
    Car(){
        cout<<"Car's default constructor is called."<<endl;
    }

    // Calling Paramatrized constructor of Vehicle in this way.
    Car(int x,int y):Vehicle(x){
        cout<<"Parametrized Constructor of Car is called."<<endl;
        numGears=y;
    }

    ~Car(){
        cout<<"Destructor of Car is called."<<endl;
    }
    
    void print(){
        cout<<"NumTyres "<<numTyres<<endl;
        cout<<"Color "<<color<<endl;
        cout<<"NumGears "<<numGears<<endl;
        // cout<<"Max Speed "<<maxSpeed<<endl;  // We can't use maxSpeed here because it is private and not inherited.
    }

};

class HondaCity:public Car{
    public:
        HondaCity(int x, int y):Car(x,y){
            cout<<"HondaCity Constructor"<<endl;
        }

        ~HondaCity(){
            cout<<"HondaCity Destructor"<<endl;
        }
};

// avoiding copies in hybrid inheritance
//class Truck: virtual public Vehicle
class Truck:public Vehicle{
    public:
    Truck(){
        cout<<"Truck's constructor is called "<<endl;
    }
    ~Truck(){
        cout<<"Truck's destructor is called "<<endl;
    }
};

class Bus :public Car, public Truck{
    public:
        Bus(){
            cout<<"Bus's Constructor is called "<<endl;
        }
        ~Bus(){
            cout<<"Bus's destructor is called "<<endl;
        }
        // void print(){
        //     cout<<"Bus"<<endl;
        // }
};


int main(){

    Vehicle v;
    v.color="blue";
  //  v.maxSpeed=100;  // since it is private we can't acess it outside the class.
  //  v.numTyres=4;    // since it is protected we can access it only through derived classes.
    
    Car c(5,6);

    c.color="Black";  // public
    // c.numTyres=4; // since it is protected can be used only inside the derived class, it can't be used here
    c.numGears=5; // public

    HondaCity h(4,5);

    Bus b;
    // b.print(); // since we have two copies of print function in bus class.It is ambiguous to decide that which fn to use.
    b.Car::print();
    b.Truck::print();  

return 0;
}