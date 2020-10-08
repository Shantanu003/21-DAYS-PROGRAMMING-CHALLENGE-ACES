#include<iostream>
using namespace std;

class C2;

class C1{
    int val1;
    friend void exchange(C1 &,C2 &);

    public:
        void setData(int a){
            val1=a;
        }
        void display(void){
            cout<<val1<<endl;
        }
};

class C2{
    int val2;
    friend void exchange(C1 &,C2 &);

    public:
        void setData(int a){
            val2=a;
        }
        void display(void){
            cout<<val2<<endl;
        }
};

void exchange (C1 &x,C2 &y){
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}

int main(){
    C1 obj1;
    C2 obj2;

    obj1.setData(45);
    obj2.setData(78);
    exchange(obj1,obj2);

    cout<<"The value of C1 after exchange : ";
    obj1.display();

    cout<<"The value of C2 after exchange : ";
    obj2.display();

    return 0;
}
