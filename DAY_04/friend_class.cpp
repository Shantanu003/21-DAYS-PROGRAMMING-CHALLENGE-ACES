#include <iostream>
using namespace std;

//Forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);

    int sumCompComplex(Complex, Complex);


    /*int sumRealComplex(Complex o1,Complex o2){
        return (o1.a+o2.a);
    }*/
};

class Complex
{
private:
    int a, b;
    //individual declaration as friend 
    //friend int Calculator ::sumRealComplex(Complex o1, Complex o2);
    //friend int Calculator ::sumCompComplex(Complex o1, Complex o2);

    // for more no of friend function in a class then declare class as a friend class
    friend class Calculator;

public:
    void setNo(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNo()
    {
        cout << "Your number is " << a << " + i" << b << endl;
    }
};

int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNo(1, 5);
    o2.setNo(4, 8);

    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    int res2= calc.sumCompComplex(o1,o2);
    cout << "The sum of real parts " << res << endl;
    cout << "The sum of complex parts " << res2<< endl;

    return 0;
}
