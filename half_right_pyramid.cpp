#include <iostream>
using namespace std;

int main(){
	cout<<"Enter the no of rows : "<<endl;
	int n;
	cin>>n;
	cout<<endl;	
	
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
