#include<iostream>
#include<string>

using namespace std;

void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
   // cout<<a<<endl;
    //cout<<b<<endl;
}
int main(){
    int x=100,y=200;
    cout<<x<<endl;
    cout<<y<<endl;

    swap(&x,&y);

    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}
