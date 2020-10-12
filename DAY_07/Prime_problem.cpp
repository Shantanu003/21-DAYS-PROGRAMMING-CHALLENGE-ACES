#include <iostream>
using namespace std;
int main() {
	int i=3,j,n,k;
	cin>>n;

	cout<<"2"<<endl;;

	for(j=2;j<=n;i++){
		for(k=2;k<i;k++){
			if(i%k==0)
			break;
		}
		if(k==i){
			cout<<i<<endl;
			j++;
		}
	}

}
