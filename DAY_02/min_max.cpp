#include<iostream>

using namespace std;

int main(){
	int n,i,max=0;
	int arr[n];
	int min=arr[0];
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(min>arr[i]){
			min=arr[i];
		}
	}
	cout<<"Max : "<<max<<endl;
	cout<<"Min : "<<min<<endl;
	return 0;
}
