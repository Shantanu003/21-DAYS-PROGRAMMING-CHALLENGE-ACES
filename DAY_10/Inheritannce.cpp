#include <iostream>
using namespace std;
class Student {
public:
  Student(){
    cout<<"Hey Guys, I am a Student"<<endl;
  }
  string collegeName = "DYPCOE";
};
//This class inherits Student class
class CompStudent: public Student {
public:
  CompStudent(){
    cout<<"I am a Computer Engineering Student"<<endl;
  }
  string Branch = "Computer";
  string name = "Shantanu";
};
int main() {
  CompStudent obj;
  cout<<"Name : "<<obj.name<<endl;
  cout<<"College Name: "<<obj.collegeName<<endl;
  cout<<"Branch : "<<obj.Branch<<endl;

  return 0;
}