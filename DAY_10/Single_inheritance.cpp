#include <iostream>
using namespace std;
class Student {
public:
  Student(){
     cout<<"Name : Shantanu "<<endl;
  }
};
class Branch: public Student {
public:
  Branch(){
     cout<<"Branch : Computer Engineering";
  }
};
int main() {
   //Creating object of class Branch
   Branch obj;
   return 0;
}