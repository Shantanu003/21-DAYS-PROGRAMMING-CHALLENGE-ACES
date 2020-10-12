#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,a,b,c;
	int arr[n];

	cin>>n;

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	a=count(arr,arr+n,0);
	b=count(arr,arr+n,1);
	c=count(arr,arr+n,2);

	//cout<<a<<" "<<b<<" "<<c;

	for(int i=0;i<a;i++){
		cout<<"0"<<" ";
	}
	for(int i=a;i<a+b;i++){
		cout<<"1"<<" ";
	}
	for(int i=a+b;i<n;i++){
		cout<<"2"<<" ";
	}


	return 0;
}
