#include<iostream>
using namespace std;

class Employee{
    private:
        int id;
        int salary;
    
    public:
        void setId(void){
            salary=1000;
            cout<<"Enter the ID of employee : ";
            cin>>id;
        
        }
        void getId(void){
            cout<<"The ID of employee is "<<id<<endl;
        }
};

int main(){
    //Employee peter,harrry,rohan,john;
    //peter.setId();
    //peter.getData();
    int n;
    cin>>n;
    Employee fb[n];
    for(int i=0;i<n;i++){
        fb[i].setId();
        fb[i].getId();
    }
}