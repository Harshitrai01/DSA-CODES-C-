#include<iostream>
using namespace std;

class Fraction{
    private:

    int num;
    int den;

    public:

    Fraction (int num, int den){
        this->num=num;
        this->den=den;

    }

    void print(){
        cout<<num<<" / "<<den<<endl;
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


};
