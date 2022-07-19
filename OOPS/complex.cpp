#include<iostream>
using namespace std;

class Complex{

    private:
    float img;
    float real;
    public:

    Complex(float img, float real){
        this->img=img;
        this->real=real;
    }

    void print(){
        cout<<img<<" + "<<real<<" i"<<endl;
    }

    void add(Complex c1){
        img=img+c1.img;
        real=real+c1.real;
    }

    void subtract(Complex c1){
        img=img-c1.img;
        real=real-c1.real;
    }

    void multiply(Complex c1){
        img=img*c1.img;
        real=real*c1.real;
    }

    void divide(Complex c1){
        img=img/c1.img;
        real=real/c1.real;
    }

    void operation(Complex c1, Complex c2){
    int input;
    cout<<"Enter choice"<<endl;
    cin>>input;
    switch(input){
        case 1:
            c1.add(c2);
            break;
        case 2:
            c1.subtract(c2);
            break;
        case 3:
            c1.multiply(c2);
            break;
        case 4:
            c1.divide(c2);
            break;
        default:
            cout<<"Wrong Input!"<<endl;
    }
    c1.print();
}

};



int main(){
    Complex c1(4,3);
    Complex c2(5,2);
    c1.print();
    c2.print();
    c1.operation(c1,c2);

return 0;
}
