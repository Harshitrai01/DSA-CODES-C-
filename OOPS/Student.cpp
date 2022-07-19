#include<iostream>
using namespace std;
class Student{
    private: // By default Private
    int age;

    public:
    string Name;
    int RollNumber;

    // Constructors
    Student(){
        cout<<"Default Constructor is called."<<endl;
    }

    Student(int r){
        cout<<"Parametrized Constructor 2 is called."<<endl;
        RollNumber=r;
    }

    Student(int a,int r){
        age=a;
        RollNumber=r;
        cout<<"Parametrized Constructor 3 is called."<<endl;
    }

    //     Student(int age,int RollNumber){
    //     this->age=age;
    //     this->RollNumber=RollNumber;
    //     cout<<"Parametrized ( this-> ) Constructor 4 is called."<<endl;
    // }

    //Destructors

    ~Student(){
        cout<<"Destructor is Called."<<endl;
    }

    void setRoll(int n){
        RollNumber=n;
        cout<<"Roll After Udation is: "<<RollNumber<<endl;
    }

    void display(){
        cout<<"Name: "<<Name<<", "<<"Roll: "<<RollNumber<<endl;
    }

    // Accessing Private Member inside the class; Private members can be acessed inside the class always;
    void getAge(){
        cout<<"Age :"<<age<<endl;
    }
    // Use of setter -> changing the value of private member age inside the class;
    void setAge(int n,int password){
        if(password!=123)
        return;
        if(n<0)
        return;
        age=n;
        cout<<"Age after Updation is: "<<age<<endl;
    }

};
