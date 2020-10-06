#include <iostream>

using namespace std;


int main() {
    long arr[10000],revarr[10000];
    long n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    for(int i=0;i<n;i++){
        revarr[i]=arr[n-i-1];
    } 
	for(int i=0;i<n;i++){
		cout<<revarr[i]<<" ";
	} 
    return 0;
}
