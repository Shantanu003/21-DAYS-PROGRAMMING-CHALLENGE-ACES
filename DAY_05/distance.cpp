#include<iostream>
#include<cmath>

using namespace std;

class Distance{
    private:
        int a,b,c,d;
        float sq;
        
    public:
        Distance(int x1,int y1,int x2, int y2){
            a=x1;
            b=y1;
            c=x2;
            d=y2;
        }
        float SquareRoot(){
                sq=sqrt(((c-a)*(c-a))+((d-b)*(d-b)));
        }

        void display(){
            cout<<"Distance between two points is : "<<sq<<endl;
        }

};

int main(){
    Distance obj(3,4,8,9);
    obj.SquareRoot();
    obj.display();

    return 0;
}