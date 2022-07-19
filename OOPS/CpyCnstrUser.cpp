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
        this->name = new char[strlen(name)+1]; 
        // copying the content of name(790) to this->name(890).
        strcpy(this->name,name);  

    }

    // Creating our own copy constructor.
    // Deep Copy
    Student(Student const& s){
        this->age=s.age;
        // this->name=s.name; // This is shallow copy.
        this->name=new char[strlen(s.name)+1];
        strcpy(this->name,name);
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
    
return 0;
}