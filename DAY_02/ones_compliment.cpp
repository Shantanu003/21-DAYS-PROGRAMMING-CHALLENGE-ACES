#include<iostream>
#include<string>
using namespace std;

class binary
{
    private:
        string s;
        //check_binary();//private member function
    public:
        void read(void);
        void check_binary(void);
        void ones_compliment(void);
        void display(void);
};

void binary :: read(void){
    cout<<"Enter a Binary No. ";
    cin>>s;
}

void binary :: check_binary(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect Binary Format"<<endl;
            exit(0);
        }
    }
}

void binary :: ones_compliment(void)
{
    //check_binary()//nesting of member function
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }

}

void binary :: display(void)
{
    cout<<"Display Ones Compliment of given Binary No. "<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
}

int main(){
    binary b;
    b.read();
    b.check_binary();
    b.ones_compliment();
    b.display();

    return 0;

}