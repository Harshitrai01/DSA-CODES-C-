#include<iostream>
using namespace std;
// Operator overloading
// instead of using f1.add(f2) we will use F1+F2 to add complex numbers.

class Fraction{
    private:

    int num;
    int den;

    public:
    Fraction(){

    }

    Fraction (int num, int den){
        this->num=num;
        this->den=den;

    }

    void print() const{
        cout<<num<<" / "<<den<<endl;  // In place of num you can also write "this->num".
    } 

    void simplify(){
        int gcd=1;
        int j=min(num,den);
        for(int i=1;i<=j;i++){
            if(num%i==0 and den%i==0)
                 gcd=i;
        }
        this-> num=num/gcd;
        this-> den=den/gcd;
    }

    Fraction add(Fraction const &f2){
        int lcm=den*f2.den;
        int x=lcm/den;
        int y=lcm/f2.den;

        int numer = x*num+(y* f2.num);
        // num=numer;
        // den=lcm;
        // Creating a new fraction with new num and lcm.
        Fraction fNew(num,lcm);
        fNew.simplify();
        return fNew;

    }

    // Operator Overloading - Addition 
    Fraction operator+(Fraction const &f2) const{
        int lcm=den*f2.den;
        int x=lcm/den;
        int y=lcm/f2.den;

        int numer = x*num+(y* f2.num);
        // num=numer;
        // den=lcm;
        // Creating a new fraction with new num and lcm.
        Fraction fNew(num,lcm);
        fNew.simplify();
        return fNew;

    }

    // Operater Overloading - Multiply
    Fraction operator*(Fraction const &f2) const{
        int n=num*f2.num;
        int d=den*f2.den;
        Fraction fNew(n,d);
        fNew.simplify();
        return fNew;

    }
    // Operator Overloading - Checking two functions are equal or not.
    bool operator==(Fraction const &f2) const{
        if(num==f2.num and den==f2.den)
        return true;
        else
        return false;
    }

    // Operator Overloading - Pre-increment 
    Fraction& operator++(){
        num=num+den;
        simplify();

        return *this;
        // this has address of f1 block
        // *this is returning the whole block
s
    }

    // Making getnum() a constant function. So that it can be accessed by constant object.
    int getnum() const{
        return num;
    }

    int getden() const{
        return den;
    }

    void setnum(int n){
        num=n;
    }

    void setden(int d){
        den=d;
    }


};

int main(){
    
    // Fraction Class and Constant functions.
    Fraction f1(10,2);
    Fraction f2(15,4);
    Fraction f3=f1.add(f2);
    Fraction f4=f1+f2;
    Fraction f5=f1*f2;
    f1.print();
    f2.print();
    f3.print();
    f4.print();
    f5.print();
    if(f1==f2)
    cout<<"Equal"<<endl;
    else
    cout<<"Not Equal"<<endl;
    ++f1;
    f1.print();
    Fraction f6=++f1;
    f1.print();
    f6.print();
    Fraction f7=++(++f1);
    f1.print();
    f7.print();

}