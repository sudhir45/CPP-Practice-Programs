#include<iostream>
using namespace std;

void rhombus(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i; j++)
			cout<<" ";
		for(int j=0; j<n; j++)
			cout<<"*";
		cout<<endl;
	}
	cout<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i; j++)
			cout<<" ";
		for(int j=0; j<n; j++){
			if(i == 0 || i == n - 1 || j == 0 || j == n - 1)
				cout << "*";
			else
				cout << " ";
		}
		//cout<<"*";
		cout<<endl;
	}
}

int main(){
	int n;
	cin>>n;
	rhombus(n);
	return 0;
}
