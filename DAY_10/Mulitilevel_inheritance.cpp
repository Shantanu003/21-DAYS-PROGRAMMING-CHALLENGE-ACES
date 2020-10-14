#include <iostream>
using namespace std;
class Student{
public:
  Student(){
     cout<<"Name : Shantanu "<<endl;
  }
};
class Branch: public Student {
public:
  Branch(){
     cout<<"Branch : Computer Engineering"<<endl;
  }
};
class Div: public Branch {
public:
  Div(){
     cout<<"Division : A "<<endl;
  }
};
int main() {
  //Creating object of class Div
  Div obj;

  return 0;
}


//In this type of inheritance one class inherits another child class.
//C inherits B and B inherits A