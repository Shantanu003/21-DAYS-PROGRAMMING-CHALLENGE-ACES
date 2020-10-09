 #include<iostream>
 using namespace std;

 class Complex{
     int a,b;
     public:
        //create a constructor
        //it is a special member function with same name as of the class 
        //used to initialise the object of its class
        //it is automatically invoked when obj is created 
        Complex(void); 

        void printData(){
            cout<<"Your number is "<<a<<"+i"<<b<<endl;
        }



};

Complex:: Complex(void){
    a=10;
    b=7;
}

int main(){
    Complex c1,c2,c3;
    c1.printData();
    c2.printData();
    c3.printData(); 

    return 0;
}

//Properties of constructor
/*
1. It should be declared in public section of class
2. it is automatically invoked while making an object
3. they cannot return values and do not have return type
4. can have default arguments
5 cannot refer address of constructor
*/