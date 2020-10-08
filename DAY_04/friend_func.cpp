#include<iostream>
using namespace std;

class Complex{
    private:
        int a,b;
    public:
        void setNo(int n1,int n2){
            a=n1;
            b=n2;
        }

        friend Complex sumComplex(Complex o1, Complex o2);

        void printNo(){
            cout<<"Your number is "<<a<<" + i"<<b<<endl;
        }
};

Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setNo((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}


int main(){
    Complex c1,c2,sum;
    c1.setNo(1,4);
    c2.setNo(2,5);

    c1.printNo();
    c2.printNo();

    sum=sumComplex(c1,c2);
    sum.printNo();

    return 0;
}

//compiler does not allow to access the private data of class outside the class
//for accessing the private data outside the class in non member function we can use friend function
//the declaration of friemd function is given in the source code

//*properties of firend function*
//1.Not in the scope of class
//2.since it is not in the scope, it cannot be called from obj 
//3.can be invoked without help of any object
//4.can be declared inside public and private section
//5.contains object as a arguments
//6.cannot access the members directly by their names
// need obj_name.member_name to access any member
