#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int num=10;
    cout<<"value"<<num;
    cout<<"\n size"<<sizeof num<<endl;
    cout<<"address"<<&num;

    int *ptr;
    cout<<"\n value"<<ptr<<endl;
    cout<<"size"<<sizeof ptr<<endl;
    cout<<"address"<<&ptr;

    ptr=nullptr;
    cout<<"\n value"<<ptr<<endl;

    int *ptr1;
    double *ptr2;
    vector<string> *ptr3;
    string ptr4;

    cout<<"size"<<sizeof ptr1<<endl;
    cout<<"size"<<sizeof ptr2<<endl;
    cout<<"size"<<sizeof ptr3<<endl;
    cout<<"size"<<sizeof ptr4<<endl;
}
