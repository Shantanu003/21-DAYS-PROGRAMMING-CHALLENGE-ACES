#include<iostream>
using namespace std;

class Employee{
    private:
        int id;
        //int count;
        //count is static data member of Employee class
        static int count;

    public:
        void setData(void){
            cout<<"Enter the Id : ";
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The Id of Employee "<<count<< " is "<<id<<endl;
        }

        static void getCount(void){
            cout<<"The value of Count is "<<count<<endl;
        }
};

int Employee:: count=1000;

int main(){

    Employee peter;
    peter.setData();
    peter.getData();
    //peter.getCount();
    Employee::getCount();
    return 0;
}