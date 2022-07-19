#include<bits/stdc++.h>
using namespace std;

class Student{

    int age;
    char *name;

    public:
    Student(int age, char *name){
        this->age=age;
        this->name=name;   
    }

    void display(){
        cout<<name<<" "<<age<<endl;
    }

};

int main(){
    char name[]="abcd";
    Student s1(20,name);
    s1.display();
    name[3]='e';
    Student s2(24, name);
    s2.display();
    s1.display();
    // Here you can see that name of s1 should be "abcd" but
    // it becomes "abce". This is because s1.name,s2.name  
    // and name both are pointing to the same array.

    // Rather than copying the entire array it copies the 0th 
    // address of the array and this is called shallow copy.
    // Changes are also reflected in original array.
    // So this is shallow copy.
    // Ideally we should not do this, we should create a new array
    // we should copy full name to that array.

return 0;
}