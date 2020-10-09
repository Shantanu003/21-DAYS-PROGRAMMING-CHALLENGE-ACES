#include<iostream>
using namespace std;

class Point{
    int x,y;
    public:
        Point(int a, int b){
            x=a;
            y=b;
        }

        void display(){
            cout<<"The point is : ("<<x<<","<<y<<")"<<endl;
        }
};

int main(){
    Point p(1,4);
    p.display();

    Point q(3,9);
    q.display();

    return 0;
}