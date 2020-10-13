#include <iostream>
using namespace std;
struct Student{
   char stuName[30];
   int stuRollNo;
   int stuAge;
};
int main(){
   Student s;
   cout<<"Enter Student Name: ";
   cin.getline(s.stuName, 30);
   cout<<"ENter Student Roll No: ";
   cin>>s.stuRollNo;
   cout<<"Enter Student Age: ";
   cin>>s.stuAge;
   cout<<"Student Record:"<<endl;
   cout<<"Name: "<<s.stuName<<endl;
   cout<<"Roll No: "<<s.stuRollNo<<endl;
   cout<<"Age: "<<s.stuAge;
   return 0;
}