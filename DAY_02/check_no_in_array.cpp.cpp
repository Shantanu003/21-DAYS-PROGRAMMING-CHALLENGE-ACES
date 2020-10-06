#include<iostream>


using namespace std;

int main(){
    int n,t;
    int arr[n];

    cin>>t>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]==t){
            cout<<"True";
        }
        else{
            cout<<"False";
        }
    }
    return 0;
}
