 #include<iostream>
 using namespace std;

 class Complex{
     int a,b;
     public:
        
        Complex(int , int); 

        void printData(){
            cout<<"Your number is "<<a<<"+i"<<b<<endl;
        }



};

Complex:: Complex(int x,int y){
    a=x;
    b=y;
}

int main(){
    //Implicit call
    Complex c1(4,6);

    //Explicit call
    Complex c2 = Complex(5,7);

    c1.printData();
    c2.printData();

    return 0;
}