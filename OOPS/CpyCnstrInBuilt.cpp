#include<bits/stdc++.h>
using namespace std;

class Student{

    int age;
    public:
    char *name;

    public:
    Student(int age, char *name){
        this->age=age;
        // We create a new array with address 890.
        // this->name will contain adress 890.
        this->name=new char[strlen(name)+1]; 
        // copying the content of name(790) to this->name(890).
        strcpy(this->name,name);  

    }
    // This is basically how inbuilt shallow copy work internally for constructors.
    Student(Student const &s){
        this->age=s.age;
        this->name=s.name; //shallow copy.
    }

    void display(){
        cout<<name<<" "<<age<<endl;
    }

};

int main(){
    char name[]="abcd";
    Student s1(20,name);
    s1.display();

    Student s2(s1);
    s2.display();

    s2.name[0]='x';
    s1.display();
    s2.display();
    // Here you can see that original s1 was also changed.
    // This is because Inbuilt copy constructor follows shallow copy.
    // Here s1.name and s2.name both are pointing to the same copied array.
    // We create user defined copy constructor for above problem.
return 0;
}