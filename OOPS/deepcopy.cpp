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
    // Here you will see that original array was not changed.
    // Changes are not reflected in orignal array.
    // This is called deep copy.


return 0;
}