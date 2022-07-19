#include "Fraction_class.cpp"
int main(){
    
    // Fraction Class and Constant functions.
    Fraction f1(10,2);
    Fraction f2(15,4);

    f1.add(f2);
    f1.print();
    f2.print();

    // Creating a constant objecct of fraction class
    const Fraction f3;
    // Calling Constant function getnum();
    cout<<f3.getnum();

}
