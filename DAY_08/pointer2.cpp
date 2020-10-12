//const and pointers

#include<iostream>
#include<string>

using namespace std;

//pass by reference

void double_data(int *ptr);

void double_data(int *ptr){
        *ptr*=2;
        //*ptr=*ptr*2
}
int main(){
    int val{10};
    int *ptr{nullptr};
    cout<<val<<endl;

    double_data(&val);

    cout<<val<<endl;

    ptr=&val;
    double_data(ptr);

    ptr=&val;
    double_data(ptr);
    cout<<val;

}
/*
int main(){
    int h{100};
    int l{54};
    //pointer to const
    const int *ptr{&h};

    cout<<*ptr<<endl;;

    ptr=&l;

    cout<<*ptr<<endl;

    //const pointers
    int *const ptr{&h};

    cout<<*ptr<<endl;;

    *ptr=65;

    cout<<*ptr<<endl;

    //const pointer to const
    const int *const ptr{&h};

    cout<<*ptr<<endl;;

    //ptr=&l; //error

    cout<<*ptr;
}
*/

