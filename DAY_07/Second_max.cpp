#include<iostream>
using namespace std;

int main(){
	int n,num[3],largest,second;
	
	cin>>n;
	while(n--){

	for(int i=0;i<3;i++){
		cin>>num[i];
	}
	if(num[0]>num[1]){
		largest=num[0];
		second=num[1];
	}
	else{
		largest=num[1];
		second=num[0];
	}
	for(int i=2;i<3;i++){
		if(num[i]>largest){
			second=largest;
			largest=num[i];
		}
		else if(num[i]>second && num[i]!=largest){
			second=num[i];
			
		}
		else if(num[i]==second && num[i]==largest){
			cout<<"no second largest";
		}
	}
	cout<<second;
}
}
