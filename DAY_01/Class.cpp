#include<iostream>
using namespace std;

class Employee
{
    private://accessible only inside the class
        int a, b ,c;
    public://accessible outside the class
        int d,e;
        void setData(int a,int b, int c);
        void getData(){
            cout<<"The Value of a is "<<a<<endl;
            cout<<"The Value of b is "<<b<<endl;
            cout<<"The Value of c is "<<c<<endl;
            cout<<"The Value of d is "<<d<<endl;
            cout<<"The Value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1,int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    Employee peter;
    peter.d = 34;
    peter.e = 78;
    peter.setData(23,56,89);
    peter.getData();

    return 0;

}