#include<iostream>
using namespace std;


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

    void add(Fraction const &f2){
        int lcm=den*f2.den;
        int x=lcm/den;
        int y=lcm/f2.den;

        int numer = x*num+(y* f2.num);
        num=numer;
        den=lcm;

        simplify();

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
