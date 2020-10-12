#include<iostream>
using namespace std;

class Base{
public:
    Base();
    virtual void bar();
    void qux();
    ~Base();
};

Base::Base(){
    cout<<"Base class constructor \n";
}

void Base::bar(){
    cout<<"This is Base class implementation of bar "<<endl;
}
void Base::qux(){
    cout<<"This is Base class implementation of qux "<<endl;
}
Base :: ~Base(){
    cout<<"Base class destructor"<<endl;
}

class Derived : public Base{
public:
    Derived();
    void bar();      //overiden by base by
    void qux();
    ~Derived();
};

Derived :: Derived(){
    cout<<"Derived class constructor"<<endl;
}

void Derived::bar(){
    cout<<"This is Derived class implementation of bar"<<endl;
}
void Derived::qux(){
    cout<<"This is Derived class implementation of qux"<<endl;
}
Derived :: ~Derived(){
    cout<<"Derived class Destructor"<<endl;
}

int main(){
    Base *b;
    Derived d;
    b=&d;
    b->bar();
    b->qux();
    return 0;
}
