#include<bits/stdc++.h>
using namespace std;

// Multiple Inheritance
class Teachear{
    public:
        string name;
        int age;

        void print(){
            cout<<"Teachear"<<endl;
        }
};

class Student{
    public:

    string name;

        void print(){
            cout<<"Student"<<endl;
        }
};

// Inheriting both above classes - Multiple inheritance
class TA : public Teachear, public Student{
    public:
        void print(){
            cout<<"TA"<<endl;
        }
};

int main(){

    TA a;
    // a.print(); // This will give error. Since it is confused that
                  // whoose print is needed to be called either teachear or student.

    // Solution for this is-
    a.Teachear::print();
    a.Student::print();
    a.print();
    // a.name="ABCD"; This will also give error since name is in both class.
    a.Teachear::name="ABCD";
    a.Student::name="EFGH";

    cout<<a.Teachear::name<<endl;
    cout<<a.Student::name;

return 0;
}