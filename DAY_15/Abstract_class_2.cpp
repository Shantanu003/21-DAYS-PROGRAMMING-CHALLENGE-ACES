#include<iostream>
using namespace std;
class Animal{
public:
   //Pure Virtual Function
   virtual void sound() = 0;

   //Normal member Function
   void sleeping() {
      cout<<"Sleeping";
   }
};
class Dog: public Animal{
public:
   void sound() {
      cout<<"Woof"<<endl;
   }
};
int main(){
   Dog obj;
   obj.sound();
   obj.sleeping();
   return 0;
}

/*
1) As we have seen that any class that has a pure virtual function is an abstract class.
2) We cannot create the instance of abstract class. For example:
  If I have written this line Animal obj;
  in the above program, 
  it would have caused compilation error.
3) We can create pointer and reference of base abstract class points to the instance of child class. 
For example, this is valid:
  Animal *obj = new Dog();
  obj->sound();
4) Abstract class can have constructors.
5) If the derived class does not implement the pure virtual function of parent class then the derived class becomes abstract.
*/